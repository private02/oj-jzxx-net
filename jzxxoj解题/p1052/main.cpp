#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：进行取余处理*/

int main()
{
	int a[20], n, max = -999999, location = 0;
	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0;i < n;i++)
	{
		int sum = 0;
		for (int j = 0;j < 4;j++)
		{
			sum = sum + a[(i + j) % n];
		}
		if (sum > max)
		{
			max = sum;
			location = i + 1;
		}
	}

	printf("%d\n%d\n", max, location);

	getchar();
	getchar();

	return 0;
}