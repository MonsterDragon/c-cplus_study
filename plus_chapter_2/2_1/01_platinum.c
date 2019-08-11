// platinum.c -- your weight in platinum
# include <stdio.h>
int main(void)
{
	float weight, value; // 体重相当的铂金的价值
	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out");
	printf("Please enter your weight in pounds: ");

	/* 获取用用户的输入*/
	scanf("%f", &weight);
	value = weight * 1700.0 * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value);
	
	getchar();
	getchar();
	return 0;
}
