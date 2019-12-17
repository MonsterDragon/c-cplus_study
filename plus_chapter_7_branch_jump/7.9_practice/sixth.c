/* sixth -- 记录输入ei的次数*/
#include<stdio.h>

int main(void)
{
	char ch, last;
	int num = 0;

	while ((ch = getchar()) != '#')
	{
		if (last == 'e')
		{
			if (ch == 'i')
			{
				num++;
			}
		}
		last = ch;
	}
	printf("exist counting %d", num);
}
