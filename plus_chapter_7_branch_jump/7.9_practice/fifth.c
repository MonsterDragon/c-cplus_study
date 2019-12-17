/* fifth -- 重写四*/
#include<stdio.h>

int main(void)
{
	char ch;
	int instead = 0, i;

	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
			case '.': ch = '!';
				  putchar(ch);
				  instead++;
				  break;
			case '!': ch = '!';
				  for (i=0; i<2; i++)
				  {
				  	putchar(ch);
				  }
				  instead++;
				  break;
			default: putchar(ch);
		}
	}
	printf("instead counting %d\n", instead);
}
