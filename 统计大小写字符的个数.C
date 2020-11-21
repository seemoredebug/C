#include<stdio.h>
int main(void) {
	int daxie = 0, xiaoxie = 0, qita = 0;
	char ch;
	printf("输入若干个字母以EOF结束\n");
	while ((ch = getchar()) != EOF) {
		if (ch <= 'Z' && ch >= 'A')
			daxie++;
		else if (ch <= 'z' && ch >= 'a')
			xiaoxie++;
		else qita++;
	}
	printf("输入的大写字母有%d个，小写字母有%d个，其他字符有%d个\n", daxie, xiaoxie, qita);
	return 0;
}