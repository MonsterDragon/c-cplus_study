/* swap1.c -- 第1个版本的交换函数 */
#include <stdio.h>
void interchange(int u, int v);

int main(void)
{
	int m = 5, n = 10;

	printf("Originally m = %d addredd = %p and n = %d address = %p.\n", m, &m, n, &n);
	interchange(m, n);
	printf("Now m = %d address = %p and n = %d address = %p.\n", m, &m, n, &n);

	return 0;
}

void interchange(int u, int v)
{
	int tmp;

	printf("Original u = %d address = %p and v = %d address = %p.\n", u, &u, v, &v);
	tmp = u;
	u = v;
	v = tmp;
	printf("Now u = %d address = %p and v = %d address = %p.\n", u, &u, v, &v);
}
