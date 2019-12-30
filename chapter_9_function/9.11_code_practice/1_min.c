/* 1_min.c -- 返回两个double类型值的较小值 */
#include <stdio.h>
#include <math.h>
double min(double a, double b);

int main(void)
{
	double first, second;

	printf("Enter the first number:\n");
	scanf("%lf", &first);
	getchar();

	printf("Enter the second number:\n");
	scanf("%lf", &second);
	getchar();

	printf("The min num of %lf and %lf is %lf", first, second, min(first, second));

	return;
}

double min(double a, double b)
{
	return (a < b ? a : b);
}
