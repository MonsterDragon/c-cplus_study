/* 4_read.c -- 计算单词个数 */
#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char ch, n_ch;
	int num = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch == ' ');
			continue;
		if (ispunct(ch) != ispunct(n_ch)) // 当c为标点符号时，返回非零值
			num++;
		n_ch = ch;
	}
	printf("the num of words is %d", num);
}
