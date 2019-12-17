/* fourth -- 读取输入*/
#include<stdio.h>

int main(void)
{
	char ch;
	int instead = 0, i;

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
			for (i=0; i<2; i++)
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
