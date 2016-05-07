#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
/*思路：双重循环就搞定。*/

bool is_prime(int x) //判断素数
{
	if (x == 1)
		return false;

	for (int i = 2;i <= (int)sqrt(x);i++)
		if (x%i == 0)
			return false;
	return true;
}

int main()
{
	for (int i = 2;i <= 97;i++)
	{
		if (!is_prime(i))
		{
			continue;
		}
		for (int j = i + 2;j <= 97;j = j + 2)
		{
			if (!is_prime(j))
			{
				continue;
			}
			int k = (i + j) / 2;
			if (is_prime(k))
			{
				printf("%d %d %d\n", i, k, j);
			}
		}
	}

	getchar();
	getchar();

	return 0;
}