#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：枚举，可以压缩循环的重数
int main()
{
	int ans = 0;
	for (int i = 1;i <= 100;i++)
		for (int j = 1;j <= 50;j++)
		{
			if ((100 - i * 1 - j * 2) % 5 == 0 && (100 - i * 1 - j * 2) > 0)
				ans++;
		}

	printf("%d\n", ans);
	
	//看到结果
	getchar();
	getchar();

	return 0;
}