/* 2_matix.c -- 输出j行i列 */
#include <stdio.h>

void draw(int high, int wide);

int main(void)
{
	int a, b;

	printf("Please enter two int nums!\n");

	while ((scanf("%d%d", &a, &b) != 2))
	{
		while (getchar() != '\n')
		{
			continue;
		}
		printf("wrong nums, Please try again");
	}

	draw(a, b);

	return;
}

void draw(int high, int wide)
{
	int i, m;

	for (i=1; i<=high; i++)
	{
		for (m=1; m<=wide; m++)
		{
			printf("*");
		}
		printf("\n");
	}
}
