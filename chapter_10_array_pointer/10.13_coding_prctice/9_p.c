/* 9_p.c -- 处理变长数组 */
#include <stdio.h>
#include <stdlib.h>

int ** arr_1(int rows, int cols, int arr[rows][cols]);
void arr_2(int rows, int cols, int ** arr);

int main()
{
	int arr[3][5] = {
		{ 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10 },
		{ 2, 4, 6, 8, 10 }
	};
	// int (*pr)[5];
	int ** pr;
	int (*ar)[5];
	int rows, cols;

	cols = sizeof(*arr) / sizeof(int);
	rows = (sizeof(arr) / sizeof(int)) / (sizeof(*arr) / sizeof(int));
	printf("The size of arr is %d\n", rows);

	pr = (int **)malloc(rows * sizeof(int *));
	for (int i = 0; i < rows; i++)
	{
		pr[i] = (int *)malloc(cols * sizeof(int));
	}
	pr = arr_1(rows, cols, arr);
	ar = pr;
	arr_2(rows, cols, arr);
	arr_2(rows, cols, ar);
}

int ** arr_1(int rows, int cols, int arr[rows][cols])
{
	int m, n;
	int ** pr;
	pr = (int **)malloc(rows * sizeof(int *));
	for (int i = 0; i < rows; i++)
	{
		pr[i] = (int *)malloc(cols * sizeof(int));
	}

	for (m = 0; m < rows; m++)
	{
		for (n = 0; n < cols; n++)
		{
			pr[m][n] = arr[m][n];
		}
	}

	return pr;
}

void arr_2(int rows, int cols, int ** arr)
{
	int m, n;

	for (m = 0; m < rows; m++)
	{
		for (n = 0; n < cols; n++)
		{
			printf("%d ", arr[m][n]);
		}
		printf("\n");
	}
}
