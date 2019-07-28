# include <stdio.h>
# include <math.h>

int main()
{
	double m, d, p, r;
	d = 300000;
	p = 6000;
	r = 0.01;
	printf("d=%lf\np=%lf\nr=%lf\n", d, p, r);
	m = log10(p / p - d * r) / log10(1 + r);
	printf("m = %lf\nm = %6.1f\n", m, m);
	printf("m = %.1lf\n", m);
	return 0;
}
