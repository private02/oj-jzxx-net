#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：不像p1020那样，这题没有公式，直接循环计算即可。

int main()
{
	int n;
	double ans = 0.0;
	scanf("%d", &n);
	for (int i = 1;i <= n;i++)
	{
		ans = ans + (double)((double)1 / (double)i);
	}

	printf("%.3lf\n", ans);
	//看到结果
	getchar();
	getchar();

	return 0;
}