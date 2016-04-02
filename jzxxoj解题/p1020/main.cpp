#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：似p1002
int main()
{
	int n;
	scanf("%d",&n);

	printf("%d\n", (1 + n)*(n / 2 + 1) / 2);

	//看到结果
	getchar();
	getchar();

	return 0;
}