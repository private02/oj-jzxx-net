#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：杨辉三角的第i行第j列等于第i-1行第j列加上第i-1行第j-1列*/
int main()
{
	int n, a[10][10] = { 0 };
	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		a[i][0] = 1;
	}

	for (int i = 0;i < n;i++)
	{
		a[i][i] = 1;
	}

	for (int i = 2;i < n;i++)
	{
		for (int j = 1;j < n - 1;j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < i;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("%d\n", a[i][i]);
	}

	getchar();
	getchar();

	return 0;
}