#include<stdio.h>
float chen(float, float);
float chu(float, float);
float jia(float, float);
float jian(float, float);
char xuanze, jixu;
float shu1, shu2, jieguo;
int main(void) {
	do
	{
	printf("输入你的选择\n");
	printf("a.加法                   b.减法\n");
	printf("c.乘法                   d.除法\n");
	printf("q.结束\n");
		while ((xuanze = getchar()) != 0) {
			switch (xuanze)
			{
			case 'a':
				printf("输入第一个数字\n");
				scanf("%f", &shu1);
				printf("输入第二个数\n");
				scanf("%f", &shu2);
				jieguo = jia(shu1, shu2);
				printf("结果是%f\n", jieguo);
				break;
			case 'b':printf("输入第一个数字\n");
				scanf("%f", &shu1);
				printf("输入第二个数\n");
				scanf("%f", &shu2);
				jieguo = jian(shu1, shu2);
				printf("结果是%f\n", jieguo);
				break;
			case 'c':
				printf("输入第一个数字\n");
				scanf("%f", &shu1);
				printf("输入第二个数\n");
				scanf("%f", &shu2);
				jieguo = chen(shu1, shu2);
				printf("结果是%f\n", jieguo);
				break;
			case 'd':
				printf("输入第一个数字\n");
				scanf("%f", &shu1);
				printf("输入第二个数\n");
				scanf("%f", &shu2);
				if (shu2 == 0) {
					printf("0不能做除数重新请选择\n");
					printf("a.加法                   b.减法\n");
					printf("c.乘法                   d.除法\n");
					printf("q.结束\n");
					xuanze = getchar();
					continue;
				}
				else
					jieguo = chu(shu1, shu2);
				printf("结果是%f\n", jieguo);
			case 'q':
				printf("再见\n");
				break;
			default:printf("输入错误请重新输入\n");
				printf("a.加法                   b.减法\n");
				printf("c.乘法                   d.除法\n");
				printf("q.结束\n");
				xuanze = getchar();
				continue;
			}
			break;
		}printf("是否继续，继续输入a\n");
		jixu = getchar();
		jixu = getchar();
		xuanze = getchar();
	} while (jixu == 'a');
	return 0;

}

float jia(float a, float b) {
	float c;
	c = a + b;
	return c;
}

float jian(float a, float b) {
	float c;
	c = a - b;
	return c;
}

float chen(float a, float b) {
	float c;
	c = a * b;
	return c;

}

float chu(float a, float b) {
	float c;
	c = a / b;
	return c;
}