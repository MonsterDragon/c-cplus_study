// two function.c --一个文件包含两个函数
# include <stdio.h>
void butler(void); // 函数原型
int main(void)
{
	printf("I will summon yhe butler function.\n");
	butler();
	printf("Yes.Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void)
{
	printf("You rang, sir?\n");
}
