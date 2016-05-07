#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

int calc(int num)
{
	int res = 0;
	while (num % 5 == 0)
	{
		++res;
		num = num / 5;
	}
	return res;
}

int main()
{
	int n, ans = 0;
	scanf("%d", &n);

	for (int i = 1;i <= n;i++)
	{
		ans = ans + calc(i);
	}

	printf("%d\n", ans);

	getchar();
	getchar();

	return 0;
}