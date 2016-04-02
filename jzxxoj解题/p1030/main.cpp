#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：还是枚举，必须使用一重循环
int main()
{
	int money, cat, dog, ans = 0;
	scanf("%d%d%d", &money, &dog, &cat);

	for (int i = 1;i <= money / dog;i++)
	{
		if ((money - (i*dog)) % cat == 0) //判断是否能用完
		{
			if ((money - (i*dog)) / cat > 0)
				ans++;
		}
	}

	printf("%d\n", ans);

	//看到结果
	getchar();
	getchar();

	return 0;
}