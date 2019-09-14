/* rows2.c -- 依赖外部循环的嵌套循环 */
# include <stdio.h>

int main(void)
{
	const int ROWS = 7;
	int row;
	char ch;
	
	for (row = 0; row < ROWS; row++)
	{
		for (ch = 'A'; ch < ('A' + ROWS - row); ch++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	
	return 0;
}
