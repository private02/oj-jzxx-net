#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：4重循环枚举。*/

int main()
{
	for (int i = 1;i < 5;i++)
	{
		for (int j = 1;j < 5;j++)
		{
			for (int k = 1;k < 5;k++)
			{
				for (int l = 1;l < 5;l++)
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