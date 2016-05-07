#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

/*思路：顺序查找，循环插入。*/

int main()
{
	int x, n, a[100];
	scanf("%d%d", &x, &n);

	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	int record;

	if (x < a[0])
	{
		record = 0;
	}
	else {
		for (int i = 0;i < n;i++)
		{
			if (i == n - 1)
			{
				if (a[i-1] == x)
				{
					record = n - 1;
				}
				else {
					record = n;
				}
			}
			else {
				if (a[i + 1] >= x && a[i] <= x)
				{
					record = i + 1;
					break;
				}
			}
		}
	}

	for (int i = n - 1;i >= record;i--)
	{
		a[i + 1] = a[i];
	}

	a[record] = x;

	for (int i = 0;i < n;i++)
	{
		printf("%d ", a[i]);
	}
	printf("%d\n", a[n]);

	getchar();
	getchar();

	return 0;
}