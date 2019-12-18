/* file_eof.c -- 打来一个文件并显示还文件 */
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int ch;
	FILE * fp;
	char fname[50];

	printf("Enetr the name of the file: \n");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		printf("Failed to open file. bye\n");
		exit(1);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putchar(ch);
	}
	fclose(fp);
	return 0;
}
