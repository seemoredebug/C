#include <stdio.h>
int main(void) {
	int shuzu[6];
	int* zhizhen=NULL;
	int i = 0, a,cuowu=0,zhenque=0;
	int password[6]={ 0,6,3,5,4,2 };
	zhizhen = shuzu;
	printf("输入6密码一个个输入先输入第一个\n");
	do
	{
		scanf("%1d", &shuzu[i]);
		i++;
	} while (i!=6);
	for ( a= 0;a < 6; a++)
	{
		if (shuzu[a] != password[a])
			cuowu++;
		else
			zhenque++;
	}
	if(zhenque==6)
		printf("密码正确\n");
	else
	printf("密码错误\n");
	return 0;
}