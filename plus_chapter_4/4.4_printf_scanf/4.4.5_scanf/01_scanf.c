/* input.c -- 何时使用& */
# include <stdio.h>

int main(void)
{
	int num1, num2;
	char name[10];

	printf("Enter num1, num2, name.\n");
	scanf("%d %f", &num1, &num2);
	scanf("%s", name);
	printf("%d, %.2f, %s", num1, num2, name);

	return 0;
}
