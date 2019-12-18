/* echo_eof -- 读取字符 */
#include<stdio.h>

int main(void)
{
	int ch;

	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
}
