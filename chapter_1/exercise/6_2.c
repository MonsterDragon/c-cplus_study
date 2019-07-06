# include <stdio.h>

int main() 
{
	int a, b, c, max;
	printf("please input a, b, c: \n");
	scanf("%d, %d, %d", &a, &b, &c);
	max = a;
	if ( b > a)
	{
		max = b;
	}
	if ( c > a)
	{
		max = c;
	}
	printf("the max num is %d \n", max);
	return 0;
}
