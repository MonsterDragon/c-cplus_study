# include<stdio.h>

int main()
{
	float init = 1000.0, r_1=0.0036, r_2=0.0225, r_3=0.0198, sum_1, sum_2, sum_3;
	sum_1 = init * (1 + r_1);
	sum_2 = init * (1 + r_2);
	sum_3 = init * (1 + r_3/2) * (1 + r_3/2);
	printf("sum_1 is %f\nsum_2 is %f\nsum_3 is %f", sum_1, sum_2, sum_3);
	return 0;
}
