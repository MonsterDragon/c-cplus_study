/* truth.c -- 哪些值是真 */
# include <stdio.h>

int main(void)
{
	int n = 3;

	while (n)
	{
		printf("%ld is true\n", n--);
	}
	printf("%ld is false\n", n);

	n = -3;
	while (n)
	{
		printf("%d is true\n", n++);
	}
	printf("%d is false\n", n);

	return 0;
}
