/* sizeof.c -- 使用sizeof运算符 */
# include <stdio.h>

int main(void)
{
	int n = 0;
	size_t initsize;

	initsize = sizeof(int);
	printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, initsize);

	return 0;
}
