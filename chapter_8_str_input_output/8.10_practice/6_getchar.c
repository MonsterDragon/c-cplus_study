/* getchar -- 输入输出分别是多少 */
#include<stdio.h>

int main(void)
{
	char ch;

	printf("Please enter the first statement: \n");
	while ((ch = getchar()) != 'i')
	{
		putchar(ch);
	}

	while ((ch = getchar()) != '\n')
		continue;

	printf("Please enter the second statement: \n");
	while ((ch = getchar()) != '\n')
	{
		putchar(ch++);
		putchar(++ch);
	}

	return;
}
