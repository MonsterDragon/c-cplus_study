# include <stdio.h>
# include <stdbool.h>

int main()
{
	int year;
	scanf("%d", &year);
	bool leap;
	if(year % 4 == 0)
	{
		if(year % 100 == 0)
		{
			if(year % 400 == 0)
			{
				leap == 1;
			}
		}
		else
		{
			leap = 1;
		}
	}
	else
	{
		leap = 0;
	}
	if (leap)
	{
		printf("leap year %d", year);
	}
	else
	{
		printf("not leap year %d", year);
	}
	return 0;
}
