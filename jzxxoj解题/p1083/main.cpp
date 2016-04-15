#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：高精度算法。注意进位的处理。这里用a[0]来表示位数，x来表示进位。*/

int main()
{
	int n, a[10000], x;
	a[0] = 1;
	a[1] = 1;
	scanf("%d", &n);

	for (int i = 1;i <= n;i++)
	{
		x = 0;
		for (int j = 1;j <= a[0];j++)
		{
			a[j] = a[j] * i + x;
			x = a[j] / 10;
			a[j] = a[j] % 10;
		}
		while (x)
		{
			a[0]++;
			a[a[0]] = x % 10;
			x = x / 10;
		}
	}

	for (int i = a[0];i >= 1;i--)
	{
		printf("%d", a[i]);
	}

	printf("\n");

	getchar();
	getchar();

	return 0;
}