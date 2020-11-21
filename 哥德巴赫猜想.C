#include<stdio.h>
int sushupanding(int);
int oushupanding(int);
int main(void) {
	char jixu,b=0;
	do {
		int shuru = 1, sushu = 2;
		do {
			shuru = 1;
			printf("请输入一个数\n");
			rewind(stdin);
			scanf("%d", &shuru);
			b = getchar();
			if (b != 0) {
				shuru = 1;
				rewind(stdin);
				b = 0;
			}
		} while (oushupanding(shuru) != 0 );
		printf("%d=", shuru);
		while (sushupanding(shuru - sushu++) != 1);
		printf("%d+%d", --sushu, shuru - sushu);
		printf("\n是否继续继续输入任意结束输入ctrl+z\n");
		rewind(stdin);
		jixu = getchar();
	} while (jixu != EOF);
	return 0;
}
int sushupanding(int a) {
	int b, panduan = 1;
		for (b = 2; b < a / 2; b++)
		{
			if (a % b == 0)
			{
				panduan = 0;
				break;
			}
		}
	return panduan;
}
int oushupanding(int a) {
	if ((a / 2) == (a / 2.0))
		return 0;
	printf("不是偶数");
	return 1;
}