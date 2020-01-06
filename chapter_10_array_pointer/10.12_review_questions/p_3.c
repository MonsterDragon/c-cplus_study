/* p_3.c -- 第四题b */
#include <stdio.h>

int main(void)
{
	int * ptr;
	int fort[2][2] = { {12}, {15, 16} };
	ptr = fort[0];

	printf("&ptr == fort = %p, fort[1] = %p\n", fort, fort[1]);
	printf("*fort = %p, *fort[1] = %d, *fort[1][1] = %d\n", *fort, *fort[1], fort[1][1]);
	printf("*ptr = %d, *ptr + 1 = %d, *ptr + 2 = %d\n", *ptr, *ptr + 1, *ptr + 2);
	printf("*ptr = %d, *(ptr + 1) = %d, *(ptr + 2) = %d\n", *ptr, *(ptr + 1), *(ptr + 2));
	printf("fort[0] = %p, &fort[0][1] = %p, fort[1] = %p, &fort[1][1] = %p\n", fort[0], &fort[0][1], fort[1], &fort[1][1]);

	return 0;
}
