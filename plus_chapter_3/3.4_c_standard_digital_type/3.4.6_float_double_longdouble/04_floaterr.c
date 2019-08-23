/* floaterr.c--演示舍入错误*/

# include <stdio.h>

int main(void)
{
	float a, b;
	a = 2.0e20 + 10;
	b = a - 2.0e20;
	printf("%f \n", b);
	return 0;
}
