# include <stdio.h>

void sum(int, int);
void mutiply(int, int);

void main()
{
	char ch;
	int a, b;
	scanf("%c%d%d", &ch, &a, &b);
	switch(ch)
	{
		case 'a' : sum(a, b); 
		case 'A' : sum(a, b); break;
		case 'b' : mutiply(a, b);
		case 'B' : mutiply(a, b); break;
		default : putchar('\a');
	}
}

void sum(int num_a, int num_b)
{
	printf("x+y=%d\n", num_a + num_b);
}

void mutiply(int mut_a, int mut_b)
{
	printf("x*y=%d\n", mut_a * mut_b);
}
