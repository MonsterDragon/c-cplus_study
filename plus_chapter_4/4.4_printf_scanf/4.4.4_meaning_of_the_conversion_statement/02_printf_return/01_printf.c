/* printf -- printf()的返回值 */
# include <stdio.h>

int main (void)
{
	int bp = 212;
	int rv;

	rv = printf("%d F is water's bolling point\n", bp);
	printf("The printf() function printed %d charaters.\n", rv);

	return 0;
}
