# include <stdio.h>
# include <math.h>

int main()
{
	double a, b, c, disc, x1, x2, realpart, imagpart;
	scanf("%lf,%lf,%lf", &a, &b, &c);
	printf("the equation");
	if(fabs(a) <= 1e-6)
	{
		printf("is not a quadratic\n");
	}
	else
	{
		disc=b * b - 4 * a * c;
		if(fabs(disc) <= 1e-6)
		{
			printf("has two equal roots: %lf\n", -b / (2 * a));
		}
		else
		{
			if(disc > 1e-6)
			{
				x1 = (sqrt(disc) - b) / (2 * a);
				x2 = (-sqrt(disc) - b) / (2 * a);
				printf("has two diff real roots: %lf, %lf\n", x1, x2);
			}
			else
			{
				realpart = -b / (2 * a);
				imagpart = sqrt(-disc) / (2 * a);
				printf("has complex roots:\n");
				printf("%8.4f + %8.4fi\n", realpart, imagpart);
				printf("%8.4f - %8.4fi\n", realpart, imagpart);
			}
		}
	}
	return 0;
}

