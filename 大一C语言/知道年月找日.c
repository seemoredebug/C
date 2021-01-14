#include<stdio.h>
int main(void)
{
	int year, month;
	char ch;
	do
	{

		printf("请输入年月中间用逗号隔开\n");
		rewind(stdin);
		year = 0;
		month = 0;
		scanf("%d,%d", &year, &month);
		if (year < 0)
			printf("输入的月份不合理\n");
		else
		{
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
				printf("%d年%d月有31天\n", year, month);
			else if (month == 4 || month == 6 || month == 9 || month == 11)
				printf("%d年%d月有30天\n", year, month);
			else if (month == 2)
			{
				if ((year % 4 == 0 && year != 0) || year % 400 == 0)
					printf("%d年%d月有29天\n", year, month);
				else
					printf("%d年%d月有28天\n",year,month);
			}
			else
				printf("输入的月份不合理\n");
		}
		printf("是否继续，继续输入任意字符，结束输入ctrl+z\n");
		rewind(stdin);
		ch = getchar();
	} while (ch != EOF);

	return 0;
}