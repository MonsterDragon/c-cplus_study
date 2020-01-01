/* sum_arr1.c -- 数组元素之和 */
#include <stdio.h>
#define SIZE 10

int sum(int [], int);

int main(void)
{
	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
	int total;

	total = sum(marbles, SIZE);
	printf("The total number of marbles is %ld.\n", total);
	printf("The size of marbles is %zd bytes.\n", sizeof marbles);
}

int sum(int array[], int n)
{
	int total = 0;
	int i;

	for (i = 0; i < n; i++)
	{
		total += *(array + i);
	}
	printf("The size of array is %zd bytes.\n", sizeof array);

	return total;
}
