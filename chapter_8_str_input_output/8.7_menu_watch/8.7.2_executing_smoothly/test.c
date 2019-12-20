/* test -- 为后面的全部的程序做铺垫 */
#include<stdio.h>

char get_choice(void);
void count(void);

int main(void)
{
	int choice;

	while ((choice = get_choice()) != 'q')
	{
		switch(ch)
		{
			case 'a': printf("Buy low, sell high.\n");
				  break;
			case 'b': putchar('\a');
				  break;
			case 'c': count();
				  break;
			default: printf("Program error!\n");
				 break;
		}
	}
}

char get_choice(void)
{
	int ch;

	ch = getchar();
	while (getchar() != '\n')
		continue;
	while ((ch < 'a' || ch > 'c') && ch != 'q')
	{
		printf("Please respond with a, b, c, d, q.\n");
		ch = getchar();
		while (getchar() != '\n')
			continue;
	}
	return ch;
}
