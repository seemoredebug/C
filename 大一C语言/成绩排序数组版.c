#include<stdio.h>
#include<string.h>
void pingjunchenji(int(*number)[3], float* ping);//把数组的地址传给函数当数组指针，把平均数地址传过去用来储存数据
void shuchu(float* a, char(*id)[15], char(*name)[13], int(*number)[3]);//将待输出的值的地址传递过去，进行输出
void bijiao(float* ping, char(*id)[15], char(*name)[13], int(*number)[3]);//将数据的地址传递过去进行比较
void change(int j, float* ping, char(*id)[15], char(*name)[13], int(*number)[3]);//比较后调用的函数用于把数据进行交换
int main(void) {
	char id[20][15] = {
		 "202028190301"
		,"202028190302"
		,"202028190303"
		,"202028190304"
		,"202028190305"
		,"202028190306"
		,"202028190307"
		,"202028190308"
		,"202028190309"
		,"202028190310"
		,"202028190311"
		,"202028190312"
		,"202028190313"
		,"202028190314"
		,"202028190315"
		,"202028190316"
		,"202028190317"
		,"202028190318"
		,"202028190319"
		,"202028190320"
	};
	char name[20][13] = { "夏成仁","梁康顺","黎凡","汪健","钟东","韩志泽","北宫宇航","毛俊迈","叶佑","董沛","宋景胜","吴宪","陈维","许建木","朱芷兰","崔菱华","孙丹红","诸葛修谨","朱向梦","公孙妙婧" };
	int number[20][3] = { {93,52,42},{52,67,84},{55,89,84},{85,65,74},{45,96,55},{87,87,64},{48,74,28},{88,87,95},{74,85,62},{77,87,96},{74,52,69},{74,89,96},{74,78,98},{74,58,96},{85,84,86},{74,88,89},{88,96,74},{78,89,41},{74,61,41},{99,98,89} };//数学，物理，化学成绩
	float ping[20];
	pingjunchenji(number, ping);//将成绩数组的地址和存放平均数的数组的地址传入求平均的函数里
	bijiao(ping, id, name, number);//将4个数组的地址传给函数进行比较
	shuchu(ping, id, name, number);//将4个数组的地址传给函数进行输出
	return 0;
}

void pingjunchenji(int(*number)[3], float* ping) {

	for (int i = 0; i < 20; i++)//i的作用域只在for，求值后存放在平均数指针里的地址位置里。
		ping[i] =(number[i][0]+number[i][1]+number[i][2]) / 3.00;
	//将数理化成绩之和除以3.00这个float型数产生的float型成绩储存在ping的数组里。
}

void shuchu(float* a, char(*id)[15], char(*name)[13], int(*number)[3]) {
	printf("              沈丘二高高三10班数理化成绩统计        \n");
	printf("----------------------------------------------------\n");
	printf("    姓名       学号      数学 化学 物理   平均成绩\n");
	printf("----------------------------------------------------\n");
	for (int i = 0; i < 20; i++) {//输出数据
		printf("%8s", *(name + i));
		printf("%15s", *(id + i));
		for (int j = 0; j < 3; j++)
		{
			printf("%5d", *(*(number + i) + j));
		}
		printf("%10.2f", a[i]);
		printf("\n");
	}
}

void bijiao(float* ping, char(*id)[15], char(*name)[13], int(*number)[3]) {
	int flog = 0;//假设数据已经排序完毕
	for (int i = 0; i < 20 - 1; i++) {//冒泡排序i表示最大循环次数，最多i到18时就已经排序完成
		flog = 0;//重置flog
		for (int j = 0; j < 20 - i - 1; j++) {//j表示数组的每个具体位置
			if (*(ping + j) < *(ping + j + 1)) {//进行比较
				flog = 1;
				change(j, ping, id, name, number);//调用交换函数
			}
		}
		if (flog == 0)//有序后退出减少循环次数
			break;
	}
}
void change(int j, float* ping, char(*id)[15], char(*name)[13], int(*number)[3]) {
	float temp;//定义交换平均数的中间变量
	temp = ping[j];//将值放入中间变量进行保存
	ping[j] = ping[j + 1];//交换后一个和现在数组在j位置的值
	ping[j + 1] = temp;//将备份的值放入j后一个的位置
	char tempid[15];//定义交换学号的中间变量
	strcpy(tempid, *(id + j));//因为ID是字符串所以用strcpy函数其余一样
	strcpy(*(id + j), *(id + j + 1));
	strcpy(*(id + j + 1), tempid);
	char tempne[13];//定义交换名字的中间变量
	strcpy(tempne, *(name + j));
	strcpy(*(name + j), *(name + j + 1));
	strcpy(*(name + j + 1), tempne);
	int tempnu;//定义交换成绩的中间变量
	for (int i = 0; i < 3; i++) {
		tempnu=*(*(number + j)+i);
		*(*(number + j) + i) = *(*(number + j+1) + i);
		*(*(number + j + 1) + i) =tempnu;
	}
}