/* lethead1.c */
#include<stdio.h>
#define NAME "GIGATHING, INC."
#define ADDRESS "101 Megabuck Plazza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void);

int main(void)
{
	starbar();
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", PLACE);
	starbar();

	return 0;
}

void starbar(void)
{
	int i;

	for (i=0; i<=40; i++)
	{
		printf("*");
	}
	printf("\n");
}
