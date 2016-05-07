#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>

/*思路：枚举。*/

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
	for (int i = 10;i < 1000;i++)
	{
		if (is_prime(i))
		{
			int a[5], ts = i, xb = 0;
			while (ts > 0)
			{
				a[xb] = ts % 10;
				ts = ts / 10;
				if (ts > 0)
				{
					xb++;
				}
			}
			bool f = true;
			for (int i = 0;i <= (xb / 2);i++)
			{
				if (a[xb - i + 1] != a[i])
				{
					f = false;
					break;
				}
			}
			if (f)
			{
				printf("%d\n", i);
			}
		}
	}

	getchar();
	getchar();

	return 0;
}