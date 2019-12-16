/* second.c -- 读取输入的字符以及对应ASCII码（十进制）*/
#include<stdio.h>

int main(void)
{
	char ch;
	int ascii, num;
	num = 0;

	while ((ch = getchar()) != '#')
	{
	    if ((num % 8) != 0)
	    {
	    	printf("%d ", ch);
		num++;
	    }
	    else
	    {
	        printf("\n%d ", ch);
		num++;
	    }
	}
	printf("finish polling\n");
}
