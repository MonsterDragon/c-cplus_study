/* animals.c -- 使用switch语句 */
#include <stdio.h>
#include <ctype.h> /* ctype.h是C标准函数库中的头文件，定义了一批C语言字符分类函数（C character classification functions），用于测试字符是否属于特定的字符类别，如字母字符、控制字符等等。既支持单字节字符，也支持宽字符 */

int main(void)
{
	char ch;

	printf("Give me a letter of the alphabet, and I will give an animal name\n");
	printf("beginning with that letter.\n");
	printf("Please type in a letter; type # to end my act.\n");

	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			continue;
		if (islower(ch))
			switch (ch)
		{
			case 'a':
				printf("argali, a wild sheep of Asia\n");
				break;
			case 'b':
				printf("babirusa, a wild pig of Malay\n");
				break;
			case 'c':
				printf("desman, aquatic, molelike critter\n");
				break;
			default:
				printf("That is a strumper\n");
		}
		else
			printf("I recognize only lowercase letters.\n");
		while (getchar() != '\n')
			continue; /* 跳过输入行的剩余部分 */
		printf("Please type another letter or a #.\n");
	}
	printf("Bye");
}
