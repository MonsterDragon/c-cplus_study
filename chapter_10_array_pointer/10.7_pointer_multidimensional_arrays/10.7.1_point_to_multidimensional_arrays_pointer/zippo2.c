/* zippo2.c -- 通过指针获取zippo的信息 */
#include <stdio.h>

int main(void)
{
	int zippo[4][2] = { { 2, 4 }, { 6, 8 }, { 1, 3 }, { 5, 7 }};
	int (*pz)[2]; // pz指向一个内含两个int类型的数组
	// int * pz[2] 内含两个指针元素的数组，每个元素都指向int类型的指针
	pz = zippo;

	printf("pz = %p, pz + 1 = %p, pz + 2 = %p\n", pz, pz + 1, pz + 2);
	printf("pz[0] = %p, pz[0] + 1 = %p, pz[1] = %p\n", pz[0], pz[0] + 1, pz[1]);
	// printf("pz[0][0] = %p\n", pz[0][0]);
	printf("pz[0][0] = %d\n", pz[0][0]);
	printf("*pz[0] = %d\n", *pz[0]);
	printf("**pz = %d\n", **pz);
	printf("*pz = %p, *pz + 1 = %p\n", *pz, *pz + 1);
	printf("**pz = %d, *(*pz + 1) = %d, **(pz +1) = %d, *(*(pz + 1) + 1) = %d\n", **pz, *(*pz + 1), **(pz + 1), *(*(pz + 1) + 1));
}
