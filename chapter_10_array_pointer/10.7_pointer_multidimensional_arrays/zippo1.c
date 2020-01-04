/* zippo1.c -- zippo的相关信息 */
#include <stdio.h>

int main(void)
{
	int zippo[4][2] = {
		{ 2, 4 },
		{ 6, 8 },
		{ 10, 12 },
		{ 14, 16 }
	};

	printf("   &zippo = %p\n", &zippo);
	printf("    zippo = %p,    zippo + 1 = %p\n", zippo, zippo + 1);
	printf(" zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
	printf(" zippo[1] = %p, zippo[1] + 1 = %p\n", zippo[1], zippo[1] + 1);
	printf("   *zippo = %p,   *zippo + 1 = %p\n", *zippo, *zippo + 1);

	printf("zippo[0][0] = %d\n", zippo[0][0]);
	printf("  *zippo[0] = %d\n", *zippo[0]);
	printf("    **zippo = %d\n", **zippo);

	printf("zippo[2][1] = %d\n", zippo[2][1]);
	printf("*(*(zippo + 2) + 1) = %d\n", *(*(zippo + 2) + 1));
}
