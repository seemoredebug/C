#include <stdio.h>
int main(void)
{
	int a,b,c,geshu1,geshu, kongge,zimushu=1;
	char chushi='A', shuru;
	shuru = getchar();
	geshu1 = (int)shuru - (int)'A';
	geshu = 1+ geshu1 * 2;
	kongge = geshu-1;
	do
	{
		for (b = 0; b < kongge; b++)
		{
			printf(" ");
		}
		kongge--;
		for (c = 0; c < zimushu; c++)
			printf("%c", chushi);
		zimushu += 2;
		chushi++;
		printf("\n");
	} while (zimushu < geshu+1);
	chushi -= 2;
	kongge += 2;
	zimushu -= 4;
	do
	{
		for (b = 0; b < kongge; b++)
		{
			printf(" ");
		}
		kongge++;
		for (c = 0; c < zimushu; c++)
			printf("%c", chushi);
		zimushu -= 2;
		chushi--;
		printf("\n");
	} while (chushi>'A'-1);
	return 0;
}