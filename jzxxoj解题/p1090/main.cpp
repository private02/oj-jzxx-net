#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：4重循环枚举。*/

int main()
{
	int p;
	scanf("%d", &p);

	for (int i = 1;i <= p;i++)
	{
		for (int j = 1;j <= p;j++)
		{
			for (int k = 1;k <= p;k++)
			{
				for (int l = 1;l <= p;l++)
				{
					printf("%d%d%d%d\n", i, j, k, l);
				}
			}
		}
	}

	getchar();
	getchar();

	return 0;
}