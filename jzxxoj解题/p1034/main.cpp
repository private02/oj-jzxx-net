#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：循环
int main()
{
	int jc = 1, ans = 0, n;

	scanf("%d", &n);

	for (int i = 1;i <= n;i++)
	{
		jc *= i;
		ans += jc;
	}

	printf("%d\n", ans);

	//看到结果
	getchar();
	getchar();

	return 0;
}