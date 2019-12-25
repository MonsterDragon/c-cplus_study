/* hotel.c -- 酒店管理函数 */
#include <stdio.h>
#include "hotel.h"

int menu(void)
{
	int code, status;

	printf("\n%s%s\n", STARS, STARS);
	printf("Enter the number of the desired hotel:\n");
	printf("1) F A		2) H O\n");
	printf("3) C P		4) T S\n");
	printf("5) q");
	printf("\n%s%s\n", STARS, STARS);
	while ((status = scanf("%d", &code)) !=1 || (code < 1 || code > 5))
	{
		if (status != 1)	
		{
			scanf("%*s"); // 第一个匹配到的%s被过滤掉
		}
		printf("Enter an integer from 1 to 5, please\n");
	}

	return code;
}

int getnignts(void)
{
	int nights;

	printf("Please enter an integer, such as 2.\n");
	while ((scanf("%d", &nights)) != 1)
	{
		scanf("%*s");
		printf("Please enter an integer, such as 2.\n");
	}

	return nights;
}

void showprice(double rate, int nights)
{
	int n;
	double price = 0.0, factor = 1.0;

	for (n=1; n<=nights; n++, factor *= DISCOUNT)
	{
		price += rate * factor;
	}

	printf("The total costwill be $%0.2f.\n", price);
}
