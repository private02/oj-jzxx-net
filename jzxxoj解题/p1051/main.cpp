#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：开辟一个数组，0表示已经被踢出去，1表示还在圈内。
每次计数器累加当前数，直到计数器等于M，把当前数归零并输出。
*/

int main()
{
	int a[16], n, m, failure = 0, s = 0, subscript = 0;
	scanf("%d%d", &n, &m);

	for (int i = 1;i <= 15;i++)
	{
		a[i] = 1;
	}

	while (failure < n)
	{
		s = 0;
		while (s < m)
		{
			if (subscript == n)
			{
				subscript = 1;
			}
			else
			{
				++subscript;
			}
			s += a[subscript]; //累加
		}

		printf("%d\n", subscript);

		a[subscript] = 0; //出圈

		failure++;
	}

	getchar();
	getchar();

	return 0;
}