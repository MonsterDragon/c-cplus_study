/* p_1.c -- 前三题的元程序 */
#include <stdio.h>

int main(void)
{
	int * ptr;
	int ref[] = { 8, 4, 0, 2 };
	int index;

	for (index = 0, ptr = ref; index < 4; index++, ptr++)
	{
		printf("%d %d\n", ref[index], *ptr);
	}

	return 0;
}
