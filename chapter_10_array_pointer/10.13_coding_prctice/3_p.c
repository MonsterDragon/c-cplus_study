/* 3_p.c -- 返回int类型数组的最大值 */
#include <stdio.h>

int max(int arr[], int rows);

int main()
{
	int source[] = {1, 2, 3, 4, 5};
	int rows, max_num;

	rows = sizeof(source) / sizeof(int);
	printf("The length of source is %d\n", rows);
	max_num = max(source, rows);
	printf("The max num is %d\n", max_num);

	return 0;
}

int max(int arr[], int rows)
{
	int i, num = 0;

	for (i = 0; i < rows; i++)
	{
		if (arr[i] > num)
		{
			num = arr[i];
		}
	}

	return num;
}
