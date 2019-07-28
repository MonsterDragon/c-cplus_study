# include <stdio.h>
# include <string.h>

int main()
{
	char a[5];
	int l;
	scanf("%c", &a);
	for(l=0; l<=strlen(a); l++);
		if(a[l] < 90)
		{
			if(a[l] > 86)
				a[l] -= 22;
			else
				a[l] += 4;
		}
		else
		{
			if(a[l] > 118)
				a[l] -= 22;
			else
				a[l] += 4;
		}
		printf("%d=%c\n", l, a[l]);
	printf("a=%c", a);
	return 0;
}
