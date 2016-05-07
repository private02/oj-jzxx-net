#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

/*思路：十进制小数转换成二进制小数。*/

int main()
{
	double d = 0.0;
	int x, ans[100] = { 0 }, rec = 0;
	scanf("%lf%d", &d, &x);

	while (!((int)d == d))
	{
		if (rec + 1 == x)
		{
			printf("%d\n", (int)(d * 2));
			getchar();
			getchar();
			return 0;
		}
		d = d * 2;
		ans[rec] = (int)d;
		d = d - (int)d;
		rec++;
	}

	getchar();
	getchar();

	return 0;
}