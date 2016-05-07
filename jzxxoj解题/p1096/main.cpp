#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
/*思路：枚举。*/

bool is_prime(int x) //判断素数
{
	if (x == 1 && x == 0)
		return true;

	for (int i = 2;i <= (int)sqrt(x);i++)
		if (x%i == 0)
			return false;
	return true;
}

int main()
{
	for (int i = 100;i < 1000;i++)
	{
		int ts = i;
		if (!is_prime(ts))
		{
			ts = ts / 10;
			if (!is_prime(ts))
			{
				ts = ts / 10;
				if (!is_prime(ts))
				{
					printf("%d\n", i);
				}
			}
		}
	}

	getchar();
	getchar();

	return 0;
}