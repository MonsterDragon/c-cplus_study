/* printfout.c -- 使用转换说明*/
# include <stdio.h>
# define PI 3.141593

int main(void)
{
	int num = 7;
	float pies = 12.75;
	int cost = 7800;

	printf("The %d contestants ate %f berry pies.\n", num, pies);
	printf("The value of pi is %f.\n", PI);
	printf("Farewell!, thou art too dear for my possessing,\n");
	printf("%c%d\n", '$', 2 * cost);

	return 0;
}
