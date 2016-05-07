#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

/*思路：按规律打印。*/

int main()
{
	int n;
	scanf("%d", &n);
	//第1行
	for (int i = 1;i < n;i++)
	{
		printf(" ");
	}
	for (int i = 0;i < n;i++)
	{
		printf("*");
	}
	printf("\n");
	//第2~2n-2行
	for (int i = 2;i <= (2 * n) - 2;i++)
	{
		for (int j = 1;j <= abs(n - i);j++)
		{
			printf(" ");
		}
		printf("*");
		for (int j = 1;j <= (2 * n + 1) - 2 * (abs(n - i)) + (n - 5);j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	//最后一行
	for (int i = 1;i < n;i++)
	{
		printf(" ");
	}
	for (int i = 0;i < n;i++)
	{
		printf("*");
	}
	printf("\n");

	getchar();
	getchar();

	return 0;
}