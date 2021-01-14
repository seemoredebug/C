#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define PW "012345"
int main(void)
{
	char password[] = PW;
	char key[6] = { 0 };
	int a ;
	for (a = 2; a > -1; a--)
	{
		printf("请输入您的银行卡密码：");
		scanf("%s", &key);
		if (strcmp(password, key) == 0)
		{
			printf("输入正确！您可以进行下一步操作！");
			break;
		}
		else printf("输入错误，您还有%d次机会！", a);
		rewind(stdin);
	}
	if (a == -1)
		printf("输入次数已用完，对不起，你卡没了。");
	system("pause");
}