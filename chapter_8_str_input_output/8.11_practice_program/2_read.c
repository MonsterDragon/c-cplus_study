/*  2_read.c -- 读取字节流 */
#include<stdio.h>

int main(void)
{
	char ch;
	int n_char = 0;

	while ((ch = getchar()) != EOF)
	{
		n_char++;
		if (ch < ' ')
		{
			if (ch == '\t')
			{
				putchar('\\');
				putchar('t');
				printf(" :%d\n", ch);
			}
			else if ('\n')
			{
				putchar('\\');
				putchar('n');
				printf(" :%d\n", ch);
			}
			else
			{
				putchar('^');
				putchar(ch+64);
				printf(" %d\n", ch);
			}
		}
		else
		{
			putchar(ch);
			printf(" :%d\n", ch);
		}
	}
}
