/* wheat.c -- 指数增长 */
# include <stdio.h>
# define SQUARES 64

int main(void)
{
	const double CROP = 2E16; //世界小麦的产量
	double current, total;
	int count = 1;

	printf("square		grains		total		");
	printf("fraction of \n");
	printf("		added		grains		");
	printf("world total\n");
	total = current = 1.0; //从第1颗谷粒开始
	printf("%4d		%13.2e		%12.2e		%12.2e\n", count, current, total, total / CROP);
	while(count < SQUARES)
	{
		count = count + 1;
		current = current * 2;
		total = total + current;
		printf("%4d		%13.2e		%12.2e		%12.2e\n", count, current, total, total / CROP);
	}
	printf("That's all\n");

	return 0;
}
