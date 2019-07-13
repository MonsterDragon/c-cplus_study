# include <stdio.h>

int main()
{
	short m=10;
	unsigned short n=-1; //err:无符号代表为非负数，要想正确使用不能将负数赋值给变量
	unsigned long t=110;
	printf("t is %u", t);
	return 0;
}
