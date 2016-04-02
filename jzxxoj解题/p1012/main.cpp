#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//#include <stdlib.h>

//思路：用stdlib.h里的__max的宏(但在oj里不能这样用)

int max(int a, int b)
{
	return a >= b ? a : b;

}

int main()
{
	int x, y;
	scanf("%d %d", &x,&y);
	//printf("%d", __max(x, y));
	printf("%d\n", max(x, y));
	//看到结果
	getchar();
	getchar();

	return 0;
}