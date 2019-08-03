# include <stdio.h>

int main()
{
	float num_a;
	int num_b;
	scanf("%f", &num_a);
	if (num_a < 0)
	{
		num_b = -1;
	}
	else if (num_a = 0)
	{
		num_b = 0;
	}
	else
	{
		num_b = 1;
	}
	printf("num_b=%d\n", num_b);
	return 0;
}
