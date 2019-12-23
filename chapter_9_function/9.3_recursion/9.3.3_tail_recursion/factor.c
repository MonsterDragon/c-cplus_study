/* factor.c -- 使用循环和递归计算阶乘 */
#include<stdio.h>

long fact(int n);
long rfact(int n);

int main(void)
{
	int num;

	printf("Enter a value in the range 0-12 (q to quit):\n");
	while ((scanf ("%d", &num)) == 1)
	{
		if (num < 0)
		{
			printf("No negative numbers, please.\n");
		}
		else if (num > 13)
		{
			printf("Keep input under 13.\n");
		}
		else
		{
			printf("loop: %d factorial = %ld\n", num, fact(num));
			printf("recursion: %d factorial = %ld\n", num, rfact(num));
		}
		printf("Enter a value in the range 0-12 (q to quit):\n");
	}
	printf("Bye.\n");
}

long fact(int n)
{
	long result = 1;

	for (result; n>1; n--)
	{
		result *= n;
	}
	return result;
}

long rfact(int n)
{
	long result;

	if (n > 0)
	{
		result = n * rfact(n-1);
	}
	else
	{
		result = 1;
	}
	printf("n :%ld\n", n);
	return result;
}
