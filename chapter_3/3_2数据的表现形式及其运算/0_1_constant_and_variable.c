# include <stdio.h>

int main()
{
	/* 常量为值不能改变的量 */
	int x=12, y=0; //整型常量
	float m=0.12, n=10; //实型常量（十进制小数形式）
	float g=12.12e2, h=38.2e3; //实型常量（十进制直属形式）
	char str_1='h'; //实型常量（字符常量，普通字符）
	char str_2="\""; //实型常量（字符常量，转义字符）
	char str_3="zhangfengjie"; //实型常量（字符常量，普通字符串）
	#define PI 3.1416 //符号常量（行末无分号）
}
