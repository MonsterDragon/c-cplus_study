# include <stdio.h>

int main()
{
	char ch;
	scanf("%c", &ch);
	switch(ch)
	{
		case 'A' : printf("the grade is in 85-100\n"); break;
		case 'B' : printf("the grade is in 70-85\n"); break;
		case 'C' : printf("the grade is in 60-70\n"); break;
		default : printf("enter data error!\n");
	}
	return 0;
}
/*
用单引号引起的一个字符实际上代表一个整数，整数值对应于该字符在编译器采用的字符集中的序列值。而一般我们的编译器采用的都是ASCII字符集。因此's'的含义其实和十进制数115的含义是一致的。

而用双引号引起的字符串，代表的是一个指向无名数组起始字符的指针。
*/
