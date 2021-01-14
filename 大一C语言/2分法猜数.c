#include<stdio.h>
int main(void) {
	int caice=50,shangxian=100,xiaxian=0;
	char panduan;
	printf("我来猜你想的数字，数字在0-100之间\n");
	do {
		printf("我猜是%d\n", caice);
		printf("是猜小了数入a，猜大了输入b，猜中了输入c\n");
		panduan = getchar();
		if (panduan == 'a') {
			xiaxian = caice;
			caice = (shangxian + caice) / 2;
		}
		else if (panduan == 'b')
		{
			shangxian = caice;
			caice = (xiaxian + caice) / 2;
		}
		else if (panduan == 'c')
		{
			printf("结束\n");
			break;
		}
		panduan = getchar();
	} while (panduan != 'z');
	return 0;
}