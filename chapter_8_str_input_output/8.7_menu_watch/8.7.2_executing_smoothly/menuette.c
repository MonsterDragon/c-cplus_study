/* menuette.c -- 菜单程序 */
#include<stdio.h>

char get_choice(void);
void count(void);

int main(void)
{
	int choice;
	
	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
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
	printf("bye!\n");
}

char get_choice(void)
{
	int ch;

	ch = getchar();
	while (getchar() != '\n') 
	{
		continue;
	}
	while ((ch < 'a' || ch > 'c') && ch != 'q')
	{
		printf("Please respond with a, b, c, d, q\n");
		ch = getchar();
		while (getchar() != '\n')
			continue;
	}
	return ch;
}

void count(void)
{
	int n, i;
	char ch;

	printf("Count how far? Enter an integer:\n");

	while ((scanf("%d", &n)) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an integer.\n");
		printf("Please enter an integer value, such as 1, 23\n");
	}

	for (i=1; i<=n; i++)
	{
		printf("%d\n", i);
	}
	while (getchar() != '\n')
		continue;
}
