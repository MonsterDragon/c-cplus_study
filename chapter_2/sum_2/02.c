# include <stdio.h>

int main()
{
	int n;
	double m, sum;
	m = 1;
	n = 1.0;
	sum = 0.0;
	while(m <=100)
	{
		n = -n;
		sum = sum + n/m;
		m = m++;
	}
	printf("%f is sum", sum);
	return 0;
}
