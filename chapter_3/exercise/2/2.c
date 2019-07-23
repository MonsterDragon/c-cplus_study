# include <stdio.h>
# include <math.h>

int main()
{
	double five_y, two_thr_y, thr_two_y, one_by_one, sea_by_sea;
	five_y=1000 * (1 + 0.0585*5);
	two_thr_y=1000 * (1 + 0.0468*2) * (1 + 0.054*3);
	thr_two_y=1000 * (1 + 0.054*3) * (1 + 0.0468*2);
	one_by_one=1000 * pow((1 + 0.0414), 5);
	sea_by_sea=1000 * pow((1 + 0.0414/4), 20);
	printf("five_y=%lf\ntwo_thr_y=%lf\nthr_two_y=%lf\none_by_one=%lf\nsea_by_sea=%lf\n", five_y, two_thr_y, thr_two_y, one_by_one, sea_by_sea);
	return 0;
}
