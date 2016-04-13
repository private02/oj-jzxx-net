#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：循环，每次读入一个数，然后判断。*/
int main()
{
	int n, m, x, ans = 0;

	scanf("%d%d", &n, &m);

	for (int i = 0;i < n;i++)
	{
		scanf("%d", &x);
		if (m > x) //判断能不能喝到。注意，大于才算能喝到。
		{
			ans++;
		}
	}

	printf("%d\n", ans);

	getchar();
	getchar();

	return 0;
}