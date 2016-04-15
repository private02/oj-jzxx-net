#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：两重循环枚举。*/

int main()
{
	int k;
	for (int i = 1;i <= 20;i++)
	{
		for (int j = 1;j <= 33;j++)
		{
			k = (100 - i * 5 - j * 3) * 3;
			if (i + j + k == 100)
			{
				printf("%d %d %d\n", i, j, k);
			}

		}
	}

	getchar();
	getchar();

	return 0;
}