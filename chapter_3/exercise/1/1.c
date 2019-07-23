# include <stdio.h>
# include <math.h>

int main()
{
	double last_num, a, b;
	scanf("%lf", &a);
	b = 1 + 0.09;
	last_num=pow(a, b);
	printf("last_num=%f\n", last_num);
	return 0;
}
