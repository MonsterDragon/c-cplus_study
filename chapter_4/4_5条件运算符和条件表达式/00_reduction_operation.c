# include <stdio.h>

int main()
{
	char ch;
	scanf("%c", &ch);
	ch = ch <= 90 ? ch + 32 : ch;
	printf("ch=%c\n", ch);
	return 0;
}
