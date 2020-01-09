/* 4_p.c -- 第四题 */
#include <stdio.h>

double * max(double arr[], int rows);

int main(void)
{
	double arr[] = { 1, 2, 3, 4, 5 };
	double * add;
	int leng;

	leng = sizeof(arr) / sizeof(double);
	printf("the length of array is %d\n", leng);
	add = max(arr, leng);

	printf("the max num address is %p\n", add);

	return 0;
}

double * max(double arr[], int rows)
{
	int i;
	double * add;
	double num = 0.0;

	for (i = 0; i < rows; i++)
	{
		if (arr[i] > num)
		{
			num = arr[i];
		}
	}
	add = &num;

	return add;
}
