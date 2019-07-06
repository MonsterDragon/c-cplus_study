# include <stdio.h>

int main()
{
	int i, sum;
	i = 2;
	sum = 1;
	while(i <= 5)
	{
		sum = sum * i;
		i = i++	;
	}
	printf("sum is %d", sum);
	return 0;
}
