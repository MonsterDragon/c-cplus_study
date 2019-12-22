/* lethead2.c */
#include<stdio.h>
#include<string.h>

#define NAME "GIGATHING, INC."
#define ADDRESS "101 Megabuck Plazza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void)
{
	int spaces;

	show_n_char('*', WIDTH);
	putchar('\n');
	show_n_char(SPACE, 12);
	printf("%s\n", NAME);

	spaces = (WIDTH - strlen(ADDRESS)) / 2; // 计算要跳过多少个空格
	show_n_char(SPACE, spaces);
	printf("%s\n", ADDRESS);

	spaces = (WIDTH - strlen(PLACE)) / 2;
	show_n_char(SPACE, spaces);
	printf("%s\n", PLACE);

	show_n_char('*', WIDTH);
}

void show_n_char(char ch, int num)
{
	int i;
	for (i=0; i<=num; i++)
	{
		putchar(ch);
	}
}
