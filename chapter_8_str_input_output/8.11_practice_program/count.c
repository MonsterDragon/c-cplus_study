/* count.c -- 计算小写和大写字符的个数 */
#include<stdio.h>

int main(void)
{
	char ch;
	int l_num = 0, h_num = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch >= 65 && ch <=90)
		{
			h_num++;
		}
		else if (ch >= 97 && ch <= 122)
		{
			l_num++;
		}
		else
		{
			continue;
		}
	}
	printf("low charaters num is %d\n", l_num);
	printf("high charaters num is %d\n", h_num);
}
