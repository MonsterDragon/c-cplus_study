/* third.c -- 读取整数直到用户输入0 */
#include<stdio.h>

int main(void)
{
    char ch;
    int odd_num = 0, even_num = 0, odd_total=0, even_total=0, reminder;
    float odd_average=0, even_average=0;

    while ((ch = getchar()) != '0')
    {
	if (ch == ' ' || ch == '\n')
		continue;
	reminder = ch % 2;	
    	switch (reminder)
    	{
		case 1:
			odd_num++;
			odd_total += ch;
			break;
		case 0:
			even_num++;
			even_total += ch;
			break;
    	}
    }
    if (odd_num != 0)
    {
    	odd_average = odd_total / odd_num;
    }
    if (even_num != 0)
    {
    	even_average = even_total / even_num;
    }
    printf("odd num is %d, total is %d, average is %.2f\n", (odd_num, odd_total, odd_average));
    printf("even num is %d, total is %d, average is %.2f\n", (even_num, even_total, even_average));
    printf("finish polling\n");
}
