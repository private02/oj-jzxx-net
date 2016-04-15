#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：递归。*/

int n, p;

void dfs(int n,int x)
{
	if (n == ::n) //::n是全局的n
	{
		printf("%d\n", x);
		return;
	}

	for (int i = 1;i <= p;i++)
	{
		dfs(n + 1, x * 10 + i);
	}
}

int main()
{
	scanf("%d%d", &n, &p);

	dfs(0, 0);

	getchar();
	getchar();

	return 0;
}