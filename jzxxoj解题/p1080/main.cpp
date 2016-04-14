#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main()
{
	int n, xb = 0, a[30];
	scanf("%d", &n);

	while (n > 0)
	{
		a[xb] = n % 2;
		n = n / 2;
		xb++;
	}

	for (int i = 0;i < xb;i++)
	{
		if (a[i])
		{
			printf("%d\n", i);
		}
	}

	getchar();
	getchar();

	return 0;
}