#include<stdio.h>
double daoshu(double);
int main(void) {
	double a, b, adao, bdao, tiaohe;
	printf("输入2个数用逗号隔开\n");
	scanf("%lf,%lf", &a, &b);
	adao = daoshu(a);
	bdao = daoshu(b);
	tiaohe = (adao + bdao) / 2;
	tiaohe = daoshu(tiaohe);
	printf("调和平均数是%lf", tiaohe);
	return 0;
}
double daoshu(double u) {
	double g;
	g = 1 / u;
	return g;
}