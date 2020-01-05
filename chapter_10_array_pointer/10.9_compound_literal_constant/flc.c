/* flc.c -- 有趣的常量 */
#include <stdio.h>
#define COLS 4

int sum2d(const int ar[][COLS], int rows);
int sum(const int ar[], int n);

int main(void)
{
	int total1, total2, total3;
	int * ptr1;
	int (*ptr2)[COLS];

	ptr1 = (int []){ 10, 20 };
	ptr2 = (int [2][4]){ { 1, 2, 3, -9 }, { 4, 5, 6, -8 } };

	total1 = sum(ptr1, 2);
	total2 = sum2d(ptr2, 2);
	total3 = sum((int []){ 4, 4, 4, 5, 5, 5 }, 6);
	printf("total1 = %d\n", total1);
	printf("total2 = %d\n", total2);
	printf("total3 = %d\n", total3);

	return 0;
}

int sum(const int ar [], int n)
{
	int i, total = 0;

	for (i = 0; i < n; i++)
	{
		total += ar[i];
	}

	return total;
}

int sum2d(const int ar [][COLS], int rows)
{
	int i, j, total = 0;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			total += ar[i][j];
		}
	}

	return total;
}
