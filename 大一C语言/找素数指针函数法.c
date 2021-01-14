#include<stdio.h>
zhishu(int*);
int main(void) {
	int i = 3;

	while (i)
	{
		printf("%d\n", i);
		zhishu(&i);
	}
	return 0;
}
zhishu(int*zhizhen) {
	int a = 2,b;
	b = *zhizhen;
	b++;
	while (a<b)
	{
		if (b%a==0)
		{
			b++;
			a = 2;
			continue;
		}
		a++;
	}
	*zhizhen = b;
}