#include<stdio.h>
#include<math.h>
int sushupanding(int);
int main(void) {
	char jixu;
	do {
		int shuru = 0, sushu = 2;
		printf("请输入一个数\n");
		rewind(stdin);
		scanf("%d", &shuru);
		printf("%d=", shuru);
		while (sushu <= shuru) {
			if (shuru % sushu == 0)
			{
				printf("%d*", sushu);
				shuru /= sushu;
			}
			if (sushupanding(shuru) == 1) {
				printf("%d", shuru);
				break;
			}
			else if (sushupanding(shuru) == 0)
			{
				sushu++;
			}
		}
		printf("\n是否继续继续输入任意结束输入ctrl+z\n");
		rewind(stdin);
		jixu = getchar();
	} while (jixu != EOF);
	return 0;
}
int sushupanding(int a) {
	int b,panduan=1;
	for(b=2; b <sqrt(a); b++)
	{
		if (a%b==0)
		{
			panduan = 0;
			break;
		}
	}
	return panduan;
}