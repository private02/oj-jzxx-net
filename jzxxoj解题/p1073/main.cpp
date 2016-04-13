#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：这是蜗牛爬井问题。一重循环搞定。*/

int main()
{
	int n, m, h, ans = 0, temp = 0;
	scanf("%d%d%d", &n, &m, &h);

	while (temp < h)
	{
		temp = temp + n;
		if (temp >= h)
		{
			ans++;
			break;
		}
		temp = temp - m;
		ans++;
	}

	printf("%d\n", ans);


	getchar();
	getchar();

	return 0;
}