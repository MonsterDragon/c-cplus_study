/* seventh -- 定义常量 */
#include<stdio.h>
#define SALARY 1000
#define STANDARD 40
#define FORWARD 300
#define MIDDLE 150
#define FORWARD_TAX 0.15
#define MIDDLE_TAX 0.20
#define LAST_TAX 0.25
#define TIME 1.5

int main(void)
{
	double hours, total_salary, total_hours, total_tax;

	scanf("%lf", &hours);
	if (hours <= STANDARD && hours >= 0)
	{
		total_salary = hours * SALARY;	
	}
	else
	{
		total_hours = STANDARD + (hours - STANDARD) * TIME;
		total_salary = hours * SALARY;
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
	printf("total_salary: %lf\ntotal_tax: %lf\npure_salary: %lf\n", total_salary, total_tax, total_salary-total_tax);
}
