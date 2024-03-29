#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
	char s_no[15];
	char name[13];
};

typedef struct dormitory
{
	int buliding_no;
	int room_num;
	char sex[4];
	int live_num;
	struct student stu[8];
}dormit;

void xuehao(dormit *b);
void xingming(dormit* b);
void louhao(dormit* b);

int main(void) {
	char ch='0';
	dormit dorm[10] = {
		{10,102,"男",4,{{"202028190310","夏成仁"},{"202028190302","梁康顺"},{"202028190308","黎凡"},{"202028190336","汪健"},{"202028190305","钟东"}}},
		{10,103,"男",7,{{"202028190315","裴和同"},{"202028190301","谢永望"},{"202028190303","耿家骏"},{"202028190328","季嘉禧"},{"202028190326","彤正初"},{"202028190307","卢乐湛"}}},
		{10,104,"男",6,{{"202028190314","藤修谨"},{"202028190306","焦永宁"},{"202028190309","蔺永昌"},{"202028190324","邵咏志"},{"202028190325","司马欣嘉"},{"202028190331","公叔永宁"}}},
		{10,105,"男",8,{{"202028190323","苏鸿福"},{"202028190338","平浩波"},{"202028190346","邛勇军"},{"202028190351","钟离豪"},{"202028190332","慕容鸿达"},{"202028190329","丘令璟"},{"202028190332","简文德"},{"202028190347","任炫明"}}},
		{9,104,"男",5,{{"202028190311","范德明"},{"202028190327","彭鸿波"},{"202028190339","尉经赋"},{"202028190321","荀浩博"},{"202028190330","乔子晋"}}},
		{9,105,"男",6,{{"202028190312","吴欣怡"},{"202028190319","罗勇捷"},{"202028190335","谢永望"},{"202028190342","康飞雨"},{"202028190353","冷建安"},{"202028190344","葛子民"}}},
		{12,325,"女",8,{{"202028190304","夏寄南"},{"202028190318","尉婉秀"},{"202028190316","吴晓筠"},{"202028190320","何昭懿"},{"202028190340","苏南晴"},{"202028190352","翠英"},{"202028190343","公孙婷婷"},{"202028190322","魏芳馨"}}},
		{12,324,"女",6,{{"202028190320","张暄和"},{"202028190317","欧琼音"},{"202028190341","周晨希"},{"202028190337","燕晓灵"},{"202028190333","梁夏之"},{"202028190341","幸平绿"}}},
		{12,324,"女",7,{{"202028190334","庆其雨"},{"202028190348","高春晓"},{"202028190350","贺敏慧"},{"202028190360","蒋敏丽"},{"202028190313","朴若翠"},{"202028190356","沈思柔"},{"202028190358","瓮雨莲"}}},
		{12,324,"女",6,{{"202028190345","杭思烟"},{"202028190349","樊杨柳"},{"202028190345","施寄云"},{"202028190357","彭思烟"},{"202028190355","童莉莉"},{"202028190354","奚代巧"}}},
	};
	do {
		printf("1.按学号查询此人所在的楼号、宿舍号。\n");
		printf("2.按姓名查询此人所在的楼号、宿舍号。\n");
		printf("3.按楼号、宿舍号查询所有人的信息。\n");
		printf("4.退出。\n");
		rewind(stdin);
		ch = getchar();
		switch (ch) {
		case'1':xuehao(dorm); break;
		case'2':xingming(dorm); break;
		case'3': louhao(dorm); break;
		case'4':break;
		default:
			printf("输入错误请重新输入\n");
		}
	} while (ch!='4');
}

void xuehao(dormit* b) {
	char no[13] = { 0 };
	int i = 0, j = 0;
	printf("请输入学号:");
	scanf("%s",no);
	for ( i = 0; i < 10; i++)
	{
		for ( j = 0; j < (b+i)->live_num; j++)
		{
			if (strcmp(no, (b + i)->stu[j].name)==0)
				printf("姓名：%s   性别：%s   学号：%s   楼号：%d   宿舍号：%d\n", (b + i)->stu[j].name, (b + i)->sex, (b + i)->stu[j].s_no, (b + i)->buliding_no, (b + i)->room_num);
		}
	}
	
}

void xingming(dormit* b) {
	char no[15] = { 0 };
	int i = 0, j = 0;
	printf("请输入学号:");
	scanf("%s", no);
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < (b + i)->live_num; j++)
		{
			if (strcmp(no, (b + i)->stu[j].s_no) == 0)
				printf("姓名：%s   性别：%s   学号：%s   楼号：%d   宿舍号：%d\n", (b + i)->stu[j].name, (b + i)->sex, (b + i)->stu[j].s_no, (b + i)->buliding_no, (b + i)->room_num);
		}
	}
}

void louhao(dormit* b) {
	int bulid = 0, room = 0;
	printf("请输入楼号");
	scanf("%d",&bulid);
	printf("请输入宿舍号");
	scanf("%d",&room);
	for (int i = 0; i < 10; i++)
	{
	if (bulid==(b+i)->buliding_no||room==(b+i)->room_num)
		for (int j = 0; j < (b + i)->live_num; j++)
		printf("姓名：%s   性别：%s   学号：%s   楼号：%d   宿舍号：%d\n", (b + i)->stu[j].name, (b + i)->sex, (b + i)->stu[j].s_no, (b + i)->buliding_no, (b + i)->room_num);
	}
}