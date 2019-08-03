# include <stdio.h>

int main()
{
	int s, c;
	float d, p, w, f;
	scanf("%f,%f,%d", &p, &w, &s);
	if(s > 3000)
	{
		c = 12;
	}
	else
	{
		c = s / 250;
	}
	switch(c)
	{
		case 0 : d = 0; break;
		case 1 : d = 0.02; break;
		case 2 :
		case 3 : d = 0.05; break;
		case 4 :
		case 5 :
		case 6 :
		case 7 : d = 0.08; break;
		case 8 : 
		case 9 :
		case 10 :
		case 11 : d = 0.1; break;
		case 12 : d = 0.015; break;
	}
	f = p * w * s * (1 - d);
	printf("freight=%10.2f\n", f);
	return 0;
}
