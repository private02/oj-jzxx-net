#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：如果 （大衣件数 mod 一辆卡车一次最多可以运走件数）=0，
则直接输出两数相除的结果，否则输出两数相除的结果+1。*/
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	if (n%m == 0)
	{
		printf("%d\n", n / m);
	}
	else {
		printf("%d\n", n / m + 1);
	}

	getchar();
	getchar();

	return 0;
}