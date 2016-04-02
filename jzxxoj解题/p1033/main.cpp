#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：枚举，添加两个优化，秒过 N<3亿 的数据。
int main()
{
	int n, ans = 0;
	scanf("%d", &n);

	bool f = false;
	int ts = 0;
	for (int i = 5;i <= n;i = i + 5) //优化1：不能被5整除的无需枚举
	{
		f = false;
		ts = i;
		while (ts > 0) 
		{
			if (ts % 10 == 5)
			{
				f = true;
				break; //优化2：已有5，退出循环
			}
			ts = ts / 10;
		}
		if (f)
			ans++;
	}

	printf("%d\n", ans);

	//看到结果
	getchar();
	getchar();

	return 0;
}