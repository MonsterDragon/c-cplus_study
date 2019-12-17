/* fourth -- 读取输入*/
#include<stdio.h>

int main(void)
{
	char ch;
	int instead = 0;

	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			putchar(ch);
			instead++;
		}
		else if (ch == '!')
		{
			ch = '!';
			for (i=0, i++, i<2)
			{
				putchar(ch);
			}
			instead++;
		}
		else
		{
			putchar(ch);
		}
	}
	printf("counting instead is %d\n", instead);
}
