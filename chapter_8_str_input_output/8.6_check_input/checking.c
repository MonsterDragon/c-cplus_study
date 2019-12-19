/* checking -- 输入验证 */
#include<stdio.h>
#include<stdbool.h>

long get_long(void); // 验证输入是一个整数
bool bad_limits(long begin, long end, long low, long high); // 验证范围的上下限是否有效
double sum_squares(long a, long b); // 计算a-b之间的整数平方和

int main(void)
{
	const long MIN = -10000000L; // 范围的下限
	const long MAX = 10000000L; // 范围的上限
	long start;
	long stop;
	double answer;

	printf("This program computers yhe sum of yhe squares of integers in a range.\n");
	printf("The lower bound should not be less than -10000000 and\n");
	printf("the upper bound should not be morethan +10000000.\n");
	printf("Enter the limits (enter 0 for both limits to quit):\n");
	start = get_long();
	printf("upper limit: ");
	stop = get_long();
	while (start != 0 || stop != 0)
	{
		if (bad_limits(start, stop, MIN, MAX))
		{
			printf("Please try again.\n");
		}
		else
		{
			answer = sum_squares(start, stop);
			printf("The sum of the squares o the integers from %ld to %ld is %g\n", start, stop, answer);
		}
		printf("Enter the limits (enter 0 for both limits to quit)\n");
		printf("lower limit: ");
		start = get_long();
		printf("upper limit: ");
		stop = get_long();
	}
}

long get_long(void)
{
	long input;
	char ch;

	while ((scanf("%ld", &input)) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an integer.\nPlease enter an integer value, such as 25, -178, or3: ");
	}

	return input;
}

bool bad_limits(long begin, long end, long low, long high)
{
	bool not_good = false;

	if (begin > end)
	{
		printf("%ld is not smaller than %ld.\n", begin, end);
		not_good = true;
	}
	if (begin < low || end < low)
	{
		printf("Values must be %ld or greater.\n", low);
		not_good = true;
	}
	if (begin > high || end > high)
	{
		printf("Vlaues must be %ld or less.\n", high);
		not_good = true;
	}

	return not_good;
}

double sum_squares(long a, long b)
{
	double total = 0;
	long i;

	for (i=a; i<=b; i++)
	{
		total += (double) i * (double) i;
	}

	return total;
}
