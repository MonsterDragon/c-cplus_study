/* altnames.c -- 可以只整数类型名*/
# include <stdio.h>
# include <stdint.h>
# include <inttypes.h>

int main(void)
{
	int32_t me32; // me32是一个32位有符号整型变量
	
	me32 = 34567867;
	printf("First, assume int32_t is int: ");
	printf("me32 = %d\n", me32);
	printf("Next, let's not make any assumptions.\n");
	printf("Instead, use a \"macro\"from inttypes.h: ");
	printf("me32 = %" PRId32 "\n", me32);

	return 0;
}
