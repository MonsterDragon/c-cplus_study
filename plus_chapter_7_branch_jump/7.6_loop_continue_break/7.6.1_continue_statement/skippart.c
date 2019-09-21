/* skippart -- 使用continue跳过部分循环 */
# include <stdio.h>

int main(void)
{
	const float MIN = 0.0;
	const float MAX = 100.0;

	float score;
	float total = 0.0;
	int n = 0;
	float min = MAX;
	float max = MIN;

	printf("Enter the first score (q to quit): ");
	while(scanf("%f", &score))
	{
		if (score < MIN || score > MAX)
		{
			printf("%0.1f is an invalid value. Try again: ", score);
			continue;
		}
		printf("Accepting %0.1f:\n", score);
		min = (score < min) ? score : min;
		max = (score > max) ? score : max;
		total += score;
		n++;
		printf("Enter next score (q to quit): ");
	}
	if (n > 0)
	{
		printf("Average of %d scores is %0.1f.\n", n, total/n);
		printf("Low = %0.1f, high = %0.1f\n", min, max);
	}
	else
	{
		printf("No valid sores were entered!\n");
	}

	return 0;
}
