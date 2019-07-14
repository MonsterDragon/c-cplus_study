# include <stdio.h>
# include <math.h>

int main()
{
	double a, b, c, disc, p, q, x_1, x_2;
	scanf("%lf, %lf, %lf", &a, &b, &c);
	printf("a=%lf, b=%lf, c=%lf\n", a, b, c);
	disc = b*b-4*a*c; // 不确定c的平方能否这样表示
	p = -b/a/2.0;
	q = sqrt(disc)/a/2.0;
	x_1 = p - q;
	x_2 = p + q;
	printf("x_1 = %7.2f\nx_2 = %7.2f\n", x_1, x_2);
	return 0;
}
