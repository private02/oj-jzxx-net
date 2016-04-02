#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int a, b;
//思路：输入并输出。
int main()
{
	scanf("%d%d", &a, &b);
	printf("%d %d\n", a / b, a%b);

	//看到结果
	getchar();
	getchar();

	return 0;
}