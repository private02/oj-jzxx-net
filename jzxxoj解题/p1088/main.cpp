#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：3重循环枚举。*/

int main()
{
	for (int i = 1;i < 4;i++)
	{
		for (int j = 1;j < 4;j++)
		{
			for (int k = 1;k < 4;k++)
			{
				printf("%d%d%d\n", i, j, k);
			}
		}
	}

	getchar();
	getchar();
	
	return 0;
}