/* fibo.c -- 生成斐波那契数列 */
#include<stdio.h>
#include<&gt>

unsigned long fibonacci(int num);

int main()
{
	int num;

	printf("Please enter the num of array:\n");
	while ((scanf("%d", &num)) == 1)
	{
		printf("Fibonacci array: ");
		printf("%lu", fibonacci(num));
		printf("\nPlease enter the num of array:\n");
	}
	printf("done");
}

unsigned long fibonacci(int num)
{
	if (num > 2)
	{
		return fibonacci(num-1) + fibonacci(num-2); 
	}
	else
	{
		return 1;
	}
}
