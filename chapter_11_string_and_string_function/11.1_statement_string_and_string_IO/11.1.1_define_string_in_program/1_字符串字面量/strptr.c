/* strptr.c -- 把字符串看做指针 */
#include <stdio.h>

int main()
{
	printf("%s %p %c", "We", "are", *"space farers");

	return 0;
}
