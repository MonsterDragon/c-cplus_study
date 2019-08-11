// decimal -- 10 - %d; 8 - %o; 16 - %x
# include <stdio.h>
int main(void)
{
	int num = 100;
	printf("%d; %#o, %#x\n", num, num, num);

	return 0;
}
