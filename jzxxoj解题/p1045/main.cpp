#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
#define _SIZE 101

/*思路：筛表法，具体：
先设置一个bool（布尔）数组，刚开始都设置为
true（代表全是素数），然后第一重循环（i）从2开始，
到(int)sqrt(数组大小)为止。
如果已经是合数则执行下一次循环，否则从i倍开始，
把它的倍数标为合数。一直标到不能再有更多倍数为止。（数组大小/i)
然后我们可以发现bool数组里面值为false的都是合数，值为
true的都是素数。
*/

int main()
{
	bool a[_SIZE];
	int i, j;
	for (i = 0;i < _SIZE;i++)
	{
		a[i] = true;
	}

	for (i = 2;i <= (int)sqrt(_SIZE - 1);i++) //筛表
	{
		if (!a[i]) continue;
		for (j = i;j <= (_SIZE - 1) / i;j++)
		{
			a[i*j] = 0;
		}

	}

	int t = 0;
	for (i = 2;i < _SIZE;i++)
	{
		if (a[i])
		{
			t++;
			if (t % 5 == 0)
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d ", i);
			}
		}
	}

	getchar();

	return 0;
}