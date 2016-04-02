#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：枚举百位十位个位，比N大便停止。
int main()
{
	int n, ans = 0;
	scanf("%d", &n);

	bool f = true;
	for (int b = 1;b < 10 && f;b++)
	{
		for (int t = 0;t < 10 && f;t++)
		{
			for (int o = 0;o < 10 && f;o++)
			{
				if (b * 100 + t * 10 + o > n)
				{
					f = !f;
					break; //这句一定要加，不加的话程序在输入为370时输出是错的。
				}
				if ((b * 100 + t * 10 + o) == (b*b*b + t*t*t + o*o*o))
				{
					//printf("%d\n", b * 100 + t * 10 + o); //这些不需要输出，但在Debug使用
					ans++;
				}
			}
		}
	}

	printf("%d\n", ans);

	//看到结果
	getchar();
	getchar();

	return 0;
}