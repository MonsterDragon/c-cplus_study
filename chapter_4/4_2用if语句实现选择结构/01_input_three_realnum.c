# include <stdio.h>

int compare(double num_a, double num_b)
{
	double middle_num;
	if (num_a > num_b)
	{
		num_a = middle_num;
		num_a = num_b;
		num_b = middle_num;
		return num_a, num_b;
	}
	else
	{
		return num_a, num_b;
	}
}

int main()
{
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	printf("a=%lf\nb=%lf\nc=%lf\n", a, b, c);
	compare(a, b);
	compare(a, c);
	compare(b, c);
	printf("least=%lf\nless=%lf\nequal=%lf\n", a, b, c);
	return 0;
}
