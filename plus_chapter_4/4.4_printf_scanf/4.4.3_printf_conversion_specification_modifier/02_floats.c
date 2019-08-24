/* floats.c -- 一些浮点型修饰符的组合*/
# include <stdio.h>

int main(void)
{
	const double RENT = 3852.99; // const变量
	printf("*%f*\n", RENT); // 字段宽度是容纳待打印数字所需的位数和小数点后打印6位数字
	printf("*%e*\n", RENT); // 默认情况下，编译器在小数点的左侧打印1个数字，在小数点的右侧打印6个数字
	printf("*%4.2f*\n", RENT);
	printf("*%3.1f*\n", RENT);
	printf("*%10.3f*\n", RENT);
	printf("*%10.3E*\n", RENT);
	printf("*%+4.2f*\n", RENT);
	printf("*%010.2f*\n", RENT);

	return 0;
}
