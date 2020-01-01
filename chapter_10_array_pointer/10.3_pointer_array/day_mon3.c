/* day_mon3.c -- 使用指针表示法 */
#include <stdio.h>
#define MONTHS 12

int main(void)
{
	int index;
	int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (index = 0; index < MONTHS; index++)
	{
		printf("Month %2d has %d days.\n", index + 1, *(days + index));
	}

	return 0;
}
