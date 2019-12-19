#include<stdio.h>

int main(void)
{
	char ch;

	while ((ch = getchar()) != 'y')
	{
		printf("first char is %c\n", ch);
		while (getchar() != '\n')
		{
			printf("second char is %c\n", ch);
			continue;
		}
	}
}
