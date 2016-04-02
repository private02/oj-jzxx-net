#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：使用按位与来判断。
int main()
{
	int x;
	scanf("%d", &x);
	if (x & 0x1)
		printf("n o\n"); else
		printf("y e s\n");

	//看到结果
	getchar();
	getchar();

	return 0;
}