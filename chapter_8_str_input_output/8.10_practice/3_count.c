/* count.c -- 统计输入字符数 */
#include<stdio.h>

int main(void)
{
	int num = 0;
	int ch;

	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
		num ++;
	}
	putchar(num);
}
