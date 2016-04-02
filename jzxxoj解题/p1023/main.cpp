#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：似p1021。
int main()
{
	int n;
	scanf("%d", &n);
	int ans = 1;

	for (int i = 1;i <= n;i++) //循环
	{
		ans *= i;
	}

	printf("%d\n", ans);
	//看到结果
	getchar();
	getchar();

	return 0;
}