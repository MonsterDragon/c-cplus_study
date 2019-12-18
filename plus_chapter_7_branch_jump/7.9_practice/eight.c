/* seventh -- 定义常量 */
#include<stdio.h>
#define STANDARD 40
#define FORWARD 300
#define MIDDLE 150
#define FORWARD_TAX 0.15
#define MIDDLE_TAX 0.20
#define LAST_TAX 0.25
#define TIME 1.5

void cal(double, int);

int main(void)
{
	int num;
	double salary;

	printf("Please enter 1~5 num!\n");
	while ((scanf("%d", &num)) >0)
	{
		if (num == 5)
			break;
		printf("num is %d", num);
		switch (num)
		{
			case 1: salary = 8.75;
				cal(salary, 1);
				break;
			case 2: salary = 9.33;
				cal(salary, 2);
				break;
			case 3: salary = 10.00;
				cal(salary, 3);
				break;
			case 4: salary = 11.20;
				cal(salary, 4);
				break;
			default: printf("Please enter 1~5 nums!\n");
		}
	}
}

void cal(double salary, int level)
{
	double hours = 0, total_salary = 0, total_hours = 0, total_tax = 0;

	printf("please enter working hours\n");
	scanf("%lf", &hours);
	if (hours <= STANDARD && hours >= 0)
	{
		total_salary = hours * salary;	
	}
	else
	{
		total_hours = STANDARD + (hours - STANDARD) * TIME;
		total_salary = hours * salary;
	}
	if (total_salary < FORWARD && total_salary >= 0)
	{
		total_tax = total_salary * FORWARD_TAX;	
	}
	else if (total_salary >= FORWARD && total_salary < FORWARD + MIDDLE)
	{
		total_tax = FORWARD * FORWARD_TAX + (total_salary - FORWARD) * MIDDLE_TAX;
	}
	else
	{
		total_tax = FORWARD * FORWARD_TAX + MIDDLE * MIDDLE_TAX + (total_salary - FORWARD - MIDDLE) * LAST_TAX;
	}
	printf("level: %d\ttotal_salary: %lf\ttotal_tax: %lf\tpure_salary: %lf\n", level, total_salary, total_tax, total_salary-total_tax);
	return;
}
