# include <stdio.h>

int main()
{
	int a=3;
	printf("a=%d\n", a); // 输出有符号的十进制整数
	printf("%5d\n%5d\n", 12, -867); // 输出数据占5列，长整型为%ld，双长整型为%lld
	char ch='a';
	printf("%c\n", ch);
	short b=121;
	int c=377;
	printf("b=%c\nc=%c\n", b, c); // 输出都是y，因为%c只考虑最后一个字节
	printf("%s\n", "China");
	double d=4.5;
	printf("%f\n", d/27); // 双精度浮点数为%lf
	printf("%20.15f\n", 1/3); // 数据占据的总列数，小数点后数据占据的列数
	printf("%-20.15f,%20.15f\n", 1/3, 1/3); // 左对齐
	printf("%e\n", 1234.12); // 指数形式输出实数
	return 0;
}
