/* first.c -- 记录读取的空格、换行和其他字符的数量 */
#include <stdio.h>

int main(void)
{
	char ch;
	int space_num = 0, enter_num = 0, other_num=0;
	while ((ch = getchar()) != '#')
	{
	    switch (ch)
	    {
	    	case ' ': space_num++;
			 break;
		case '\n': enter_num++;
			 break;
		default: other_num++;
			 break;
	    }
	}
	printf("space counting %4d", space_num);
	printf("enter counting %4d", enter_num);
	printf("other counting %4d", other_num);
	printf("finish counting\n");
}
