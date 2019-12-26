/* swap3.c -- 使用指针解决交换函数的问题 */
#include <stdio.h>
void interchange(int * m, int * n);

int main(void)
{
	int x = 5, y = 10;
	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(&x, &y);
	printf("Now x = %d and y = %d.\n", x, y);

	return 0;
}

void interchange(int * u, int * v)
{
	int tmp;

	tmp = *u;
	*u = *v;
	*v = tmp;
}
