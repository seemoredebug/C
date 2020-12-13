#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void shenchen(struct a* b);
void jia(struct a* b);
void jian(struct a* b);
void chen(struct a* b);
void zhuan(struct a* b);
void shuchu(struct a* b);

struct a {
	char ch;
	int m;
	int n;
	int** one;
	int** two;
	int** three; 
	int n2;
}juzhen;

int main() {
	do {
		printf("1 矩阵相加        2 矩阵相减\n");
		printf("3 矩阵相乘        4 矩阵转置\n");
		printf("请选择（结束输入Ctrl+z）：\n");
		rewind(stdin);
		juzhen.ch = getchar();
		switch (juzhen.ch)
		{
		case '1':
		case '2':
		case '3':
		case '4':
			shenchen(&juzhen);
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
	} while (juzhen.ch != EOF);
	return 0;
}

void shenchen(struct a* b) {
	printf("输入矩阵的列数m和行数n\n");
	printf("m=");
	rewind(stdin);
	scanf("%d", &b->m);
	printf("n=");
	rewind(stdin);
	scanf("%d", &b->n);

	b->one = (int**)malloc(b->n * sizeof(int*));
	for (int i = 0; i < b->n; i++)
		b->one[i] = (int*)malloc(b->m * sizeof(int));

	

	switch (b->ch)
	{	
	case '1':
	case '2':
		b->two = (int**)malloc(b->n * sizeof(int*));
		for (int i = 0; i < b->n; i++)
			b->two[i] = (int*)malloc(b->m * sizeof(int));
		b->three = (int**)malloc(b->n * sizeof(int*));
		for (int i = 0; i < b->n; i++)
			b->three[i] = (int*)malloc(b->m * sizeof(int));
		break;
	case '3':
		printf("请输入第二个矩阵的列数n2");
		printf("n2=");
		rewind(stdin);
		scanf("%d", &b->n2);
		b->two = (int**)malloc(b->m * sizeof(int*));
		for (int i = 0; i < b->m; i++)
			b->two[i] = (int*)malloc(b->n2 * sizeof(int));

		b->three = (int**)malloc(b->n * sizeof(int*));
		for (int i = 0; i < b->n; i++)
			b->three[i] = (int*)malloc(b->n2 * sizeof(int));
		break;
	case '4':
		b->two = (int**)malloc(b->m * sizeof(int*));
		for (int i = 0; i < b->m; i++)
			b->two[i] = (int*)malloc(b->n * sizeof(int));
		b->three = (int**)malloc(b->n * sizeof(int*));
		for (int i = 0; i < b->n; i++)
			b->three[i] = (int*)malloc(b->m * sizeof(int));
		break;
	}
	

	srand(time(NULL));
	for (int i = 0; i < b->n; i++)
		for (int j = 0; j < b->m; j++)
			b->one[i][j] = (int)rand() % 10;
	switch (b->ch)
	{
	case '1':
		for (int i = 0; i < b->n; i++)
			for (int j = 0; j < b->m; j++)
				b->two[i][j] = (int)rand() % 10;
		jia(b);
		break;
	case '2':
		for (int i = 0; i < b->n; i++)
			for (int j = 0; j < b->m; j++)
				b->two[i][j] = (int)rand() % 10;
		jian(b);
		break;
	case '3':
		for (int i = 0; i < b->m; i++)
			for (int j = 0; j < b->n2; j++)
				b->two[i][j] = (int)rand() % 10;
		chen(b);
		break;
	case '4':
		zhuan(b);
		break;
	}
	
}

void jia(struct a* b) {
	for (int i = 0; i < b->n; i++)
		for (int j = 0; j < b->m; j++)
			b->three[i][j] = b->one[i][j] + b->two[i][j];
	shuchu(b);
}

void jian(struct a* b) {
	for (int i = 0; i < b->n; i++)
		for (int j = 0; j < b->m; j++)
			b->three[i][j] = b->one[i][j] - b->two[i][j];
	shuchu(b);
}

void chen(struct a* b) {
	int sum = 0;
	for (int i = 0; i < b->n; i++)
		for (int j = 0; j < b->n2; j++) {
			b->three[i][j] = 0;
			for (int z = 0; z < b->m; z++) 
				b->three[i][j] += b->one[i][z] * b->two[z][j];
		}
	shuchu(b);
}

void zhuan(struct a* b) {
	for (int i = 0; i < b->n; i++)
		for (int j = 0; j < b->m; j++)
			b->two[j][i] = b->one[i][j];
	shuchu(b);
}

void shuchu(struct a* b) {
	for (int i = 0; i < b->n; i++) {
		for (int j = 0; j < b->m; j++)
			printf("%d   ", b->one[i][j]);
		printf("\n");
	}
	switch (b->ch)
	{
	case '1':
		printf("+");
		printf("\n");
		for (int i = 0; i < b->n; i++) {
			for (int j = 0; j < b->m; j++)
				printf("%d   ", b->two[i][j]);
			printf("\n");
		}
		printf("=");
		printf("\n");
		for (int i = 0; i < b->n; i++) {
			for (int j = 0; j < b->m; j++)
				printf("%d   ", b->three[i][j]);
			printf("\n");
		}
		break;
	case '2':
		printf("-");
		printf("\n");
		for (int i = 0; i < b->n; i++) {
			for (int j = 0; j < b->m; j++)
				printf("%d   ", b->two[i][j]);
			printf("\n");
		}
		printf("=");
		printf("\n");
		for (int i = 0; i < b->n; i++) {
			for (int j = 0; j < b->m; j++)
				printf("%d   ", b->three[i][j]);
			printf("\n");
		}
		break;
	case '3':
		printf("*");
		printf("\n");
		for (int i = 0; i < b->m; i++) {
			for (int j = 0; j < b->n2; j++)
				printf("%d   ", b->two[i][j]);
			printf("\n");
		}
		printf("=");
		printf("\n");
		for (int i = 0; i < b->n; i++) {
			for (int j = 0; j < b->n2; j++)
				printf("%d   ", b->three[i][j]);
			printf("\n");
		}
		break;
	case '4':
		printf("的转置是\n");
		for (int i = 0; i < b->m; i++) {
			for (int j = 0; j < b->n; j++)
				printf("%d   ", b->two[i][j]);
			printf("\n");
		}
		break;
	}
	

	for (int i = 0; i < b->n; i++)
		free(b->one[i]);
	free(b->one);

	switch (b->ch)
	{
		
	case '1':
	case '2':
		for (int i = 0; i < b->n; i++)
			free(b->two[i]);
		free(b->two);
		for (int i = 0; i < b->n; i++)
			free(b->three[i]);
		free(b->three);
		break;
	case '3':
		for (int i = 0; i < b->m; i++)
			free(b->two[i]);
		free(b->two);
		for (int i = 0; i < b->n; i++)
			free(b->three[i]);
		free(b->three);
			break;
	case '4':
		for (int i = 0; i < b->m; i++)
			free(b->two[i]);
		free(b->two);
		for (int i = 0; i < b->n; i++)
			free(b->three[i]);
		free(b->three);
		break;
	}
	
	printf("是否继续，继续输入任意，结束输入Ctrl+z");
	rewind(stdin);
	b->ch = getchar();
	if (b->ch == EOF)
		exit(0);
}