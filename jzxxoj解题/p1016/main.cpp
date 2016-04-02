#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：通过保存平年的每月天数实现。
int p[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

int main()
{
	bool f = false;
	int x, y;

	scanf("%d%d", &x, &y);

	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0) //判闰年
		if (y == 2)
			printf("%d\n", p[y - 1] + 1); else
			printf("%d\n", p[y - 1]); else
		printf("%d\n", p[y - 1]);
	
	//看到结果
	getchar();
	getchar();

	return 0;
}