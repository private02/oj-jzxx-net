#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：枚举。

int main()
{
	int n, ans = 0;
	scanf("%d", &n);

	for (int i = 1;i <= n;i++)
		if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
			ans++;

	printf("%d\n", ans);

	//看到结果
	getchar();
	getchar();

	return 0;
}