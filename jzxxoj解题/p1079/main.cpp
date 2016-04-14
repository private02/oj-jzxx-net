#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：按规律打印。*/

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 1;i <= n / 2;i++)
	{
		for (int j = 1;j <= i - 1;j++)
		{
			printf(" ");
		}

		printf("X");

		for (int j = 1;j <= ((n / 2 + 1) - i) * 2 - 1;j++)
		{
			printf(" ");
		}

		printf("X");

		printf("\n");
	}

	//中间一行特殊处理

	for (int i = 1;i <= n / 2;i++)
	{
		printf(" ");
	}
	
	printf("X\n");

	for (int i = n / 2;i >= 1;i--)
	{
		for (int j = 1;j <= i - 1;j++)
		{
			printf(" ");
		}

		printf("X");

		for (int j = 1;j <= ((n / 2 + 1) - i) * 2 - 1;j++)
		{
			printf(" ");
		}

		printf("X");

		printf("\n");
	}

	getchar();
	getchar();

	return 0;
}