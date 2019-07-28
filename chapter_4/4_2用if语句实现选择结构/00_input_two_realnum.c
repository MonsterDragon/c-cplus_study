# include <stdio.h>

int compare(int num_1, int num_2)
{
	int num_3;
	printf("num_1=%d\nnum_2=%d\n", num_1, num_2);
	if (num_1 >= num_2)
	{
		num_3 = num_1;
		num_1 = num_2;
		num_2 = num_3;
		printf("less=%d\nmore=%d\n", num_1, num_2);
		return num_1, num_2;
	}
	else
		printf("less=%d\nmore=%d\n", num_1, num_2);
		return num_1, num_2;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	compare(a, b);
	printf("less=%d\nmore=%d", a, b);
	return 0;
}
