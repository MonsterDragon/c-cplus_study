/* 2_p.c -- 第二题的程序 */
#include <stdio.h>
#define ROW 5

void copy_arr(double arr[], double org[], int rows);
void copy_ptr(double *ptr, double *org, int rows);
void copy_btr(double btr[], double org[], double *last);
void show(double arr[], int rows);

int main(void)
{
	double source[ROW] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[ROW];
	double target2[ROW];
	double target3[ROW];
	double * pot;

	pot = source + (ROW - 1);

	copy_arr(target1, source, ROW);
	copy_ptr(target2, source, ROW);
	copy_btr(target3, source, pot);
	
	show(target1, ROW);
	show(target2, ROW);
	show(target3, ROW);

	return 0;
}

void copy_arr(double arr[], double org[], int rows)
{
	int i;

	for (i = 0; i < rows; i++)
	{
		arr[i] = org[i];
	}
}

void copy_ptr(double * arr, double * org, int rows)
{
	int i;

	for (i = 0; i < rows; i++)
	{
		*(arr + i) = *(org + i);
	}
}

void copy_btr(double arr[], double org[], double * last)
{
	double * index;
	int i;

	for (index = org, i = 0; index + i <= last; i++)
	{
		*(arr + i) = *(index + i);
	}
}

void show(double arr[], int rows)
{
	int i;

	for (i = 0; i < rows; i++)
	{
		printf("The %d number is %.2f\n", i, arr[i]);
	}
}
