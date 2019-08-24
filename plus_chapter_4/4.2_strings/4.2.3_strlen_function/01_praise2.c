/* praisel2.c -- 使用不同类型的字符串*/
// 如果编译器不识别%zd，尝试换成%u或%lu
# include <stdio.h>
# include <string.h>
# define PRAISE "You are an extraodinary being"

int main(void)
{
	char name[40];
	
	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",
		strlen(name), sizeof name);
	printf("The phrase of praise has %zd letters ",
		strlen(PRAISE));
	printf("and occupies %zd memory cells.\n", sizeof PRAISE);

	return 0;
}
