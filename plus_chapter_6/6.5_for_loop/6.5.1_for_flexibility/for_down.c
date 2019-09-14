/* for_down.c -- 递减循环 */
# include <stdio.h>

int main(void)
{
	int secs;

	for (secs = 5; secs > 0; secs--)
	{
		printf("%d seconds!\n", secs);
	}
	printf("We have ignition!\n");

	return 0;
}
