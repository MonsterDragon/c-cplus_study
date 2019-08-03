# include <stdio.h>
# include <stdbool.h>

int main()
{
	float score;
	scanf("%f", &score);
	bool a, b;
	a = score >= 60;
	b = score <= 69;
	if (a == 1 && b == 1)
	{
		printf("The grade is C!");
	}
	return 0;
}
