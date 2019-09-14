/* scores_in.c -- 使用循环处理数组 */
# include <stdio.h>

int main(void)
{
	const int SIZE = 10, PAR = 72;
	int index, score[SIZE], sum = 0;
	float average;

	printf("Enter %d golf scores: \n", SIZE);
	for (index = 0; index < SIZE; index++)
	{
		scanf("%d", &score[index]);
	}
	printf("The scores read in are as follows:\n");
	for (index = 0; index < SIZE; index++)
	{
		printf("%5d", score[index]);
	}
	printf("\n");
	for (index = 0; index < SIZE; index++)
	{
		sum += score[index];
	}
	average = (float) sum / SIZE;
	printf("sum of score = %d; average = %.2f\n", sum, average);

	return 0;
}
