#include<stdio.h>
typedef struct age
{
	char name[13];
	int shuxue;
	int wuli;
	int huaxue;
	char id[15];
	float ping;
}ji;//定义结构

void ping(ji* a);
void paixu(ji* a);
void shuchu(ji* a);
void shuchu2(ji* a);

int main(void) {
	char ch;
	ji p[20] = {
	{ "夏成仁  ",93,52,42,"202028190301" },
	{ "梁康顺  ",52,67,84,"202028190302" },
	{ "黎  凡  ",55,89,84,"202028190303" },
	{ "汪  健  ",85,65,74,"202028190304" },
	{ "钟  东  ",45,96,55,"202028190305" },
	{ "韩志泽  ",87,87,64,"202028190306" },
	{ "北宫宇航",48,74,28,"202028190307" },
	{ "毛俊迈  ",88,87,95,"202028190308" },
	{ "叶  佑  ",74,85,62,"202028190309" },
	{ "董  沛  ",77,87,96,"202028190310" },
	{ "宋景胜  ",74,52,69,"202028190311" },
	{ "吴  宪  ",74,89,96,"202028190312" },
	{ "陈  维  ",74,78,98,"202028190313" },
    { "许建木  ",74,58,96,"202028190314" },
	{ "朱芷兰  ",85,84,86,"202028190315" },
	{ "崔菱华  ",74,88,89,"202028190316" },
	{ "孙丹红  ",88,96,74,"202028190317" },
	{ "诸葛修谨",78,89,41,"202028190318" },
	{ "朱向梦  ",74,61,41,"202028190319" },
	{ "公孙妙婧",99,98,89,"202028190320" } };//定义一个结构数组
	ping(p);//调用求平均数值函数
	paixu(p);//电筒排序结构数组函数
	shuchu(p);//输出第一页
	do {//开始进行选页数的循环
		rewind(stdin);
		ch = getchar();
		if (ch == '1')
			shuchu(p);
		else if (ch == '2')
			shuchu2(p);
	} while (ch != EOF);
	return 0;
}

void ping(ji* a) {//3.00是为了使结果变成float型
	for (int i = 0; i < 20; i++)
		(a + i)->ping = (((a + i)->shuxue) + ((a + i)->wuli) + ((a + i)->huaxue)) / 3.00;
}

void paixu(ji* a) {
	ji b;
	int flag=0;
	for (int i = 0; i < 20 - 1; i++) {//循环冒泡排序最多的次数
		flag = 0;//重置flag
		for (int j = 0; j < 20 - 1 - i; j++) //进行一次冒泡将最小值放在最后
			if ((a + j)->ping < (a + j + 1)->ping)
			{
				b = *(a + j);//交换结构
				*(a + j) = *(a + j + 1);
				*(a + j + 1) = b;
				flag = 1;
			}
		if (flag == 0)
			break;
	}
}

void shuchu(ji* a) {
	printf("              沈丘二高高三10班数理化成绩统计        \n");
	printf("----------------------------------------------------\n");
	printf("    姓名       学号      数学 化学 物理   平均成绩\n");
	printf("----------------------------------------------------\n");
	for (int i = 0; i < 10; i++) {//输出数据
		printf("%8s", (a + i)->name);
		printf("%15s", (a + i)->id);
		printf("%5d", (a + i)->shuxue);
		printf("%5d", (a + i)->huaxue);
		printf("%5d", (a + i)->wuli);
		printf("%10.2f", (a + i)->ping);
		printf("\n");
	}
	printf("当前第一页，共两页");
	printf("请输入跳转的页数(ctrl+z结束)：");
}

void shuchu2(ji* a) {
	printf("              沈丘二高高三10班数理化成绩统计        \n");
	printf("----------------------------------------------------\n");
	printf("    姓名       学号      数学 化学 物理   平均成绩\n");
	printf("----------------------------------------------------\n");
	for (int i = 10; i < 20; i++) {//输出数据
		printf("%8s", (a + i)->name);
		printf("%15s", (a + i)->id);
		printf("%5d", (a + i)->shuxue);
		printf("%5d", (a + i)->huaxue);
		printf("%5d", (a + i)->wuli);
		printf("%10.2f", (a + i)->ping);
		printf("\n");
	}
	printf("当前第二页，共两页");
	printf("请输入跳转的页数(ctrl+z结束)：");
}
