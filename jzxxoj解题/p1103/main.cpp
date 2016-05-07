#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

/*思路：双重循环搞定，第二重循环次数需要控制。*/

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	getchar();
	getchar();

	return 0;
}