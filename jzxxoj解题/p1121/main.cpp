#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

/*思路：输入输出。*/

int main()
{
	int n, x, y, a[10];
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d%d", &x, &y);

	for (int i = 0;i < x - 1;i++)
	{
		printf("%d ", a[i]);
	}
	printf("%d ", y);
	for (int i = x - 1;i < n - 1;i++)
	{
		printf("%d ", a[i]);
	}
	printf("%d\n", a[n - 1]);

	getchar();
	getchar();

	return 0;
}