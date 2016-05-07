#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

int main()
{
	int i, n, a[11];
	float f = 0.0;

	scanf("%d", &n);

	for (i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
		f = f + (float)a[i];
	}

	f = f / (float)n;
	printf("AV=%.1f\n", f);

	for (int i = 0;i < n;i++)
	{
		if ((float)a[i] > f)
		{
			printf(" %d:%d", i + 1, a[i]);
		}
	}
	printf("\n");

	getchar();
	getchar();

	return 0;
}