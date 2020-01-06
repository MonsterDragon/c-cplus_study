/* p_2.c -- 第四题元程序 */
#include <stdio.h>
#define NUM 2

int main(void)
{
	int i;
	int * ptr;
	int * pr;
	int torf[2][2] = {12, 14, 16};
	int ar[NUM] = { 1, 2 };
	int br[NUM] = { 3, 4, 5 };
	// ptr = torf[0];
	ptr = torf[1];
	pr = torf[0];

	printf("*pr = %d, *(pr + 1) = %d, *(pr + 2) = %d\n", *pr, *(pr + 1), *(pr + 2));
	printf("*ptr = %d, *(ptr + 1) = %d\n", *ptr, *(ptr + 2));
	for (i = 0; i < NUM; i++)
	{
		printf("index = %d, ar element = %d\n", i+1, ar[i]);
		printf("index = %d, br element = %d\n", i+1, br[i]);
	}
	printf("index = %d, br element = %d\n", 3, br[2]);
}
