/* break.c -- 使用break退出循环 */
# include <stdio.h>
int main(void)
{
	float length, width;

	printf("Enter the length of the rectangle:\n");
	while (scanf("%f", &length) == 1)
	{
		printf("Length = %.2f:\n", length);
		printf("Enter its width:\n");
		if (scanf("%f", &width) == 1)
		{
			printf("width = %.2f:\n", width);
			printf("area = %.2f:\n", width * length);
			printf("Enter the length of the rectangle:\n");
		}
		else
		{
			break;
		}
	}
	printf("Done!\n");
}
