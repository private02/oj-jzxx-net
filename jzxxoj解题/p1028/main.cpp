#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：根据最大公约数求最小公倍数

int gcd(int a,int b)
{
	return a == 0 ? b : gcd(b%a, a);
}

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	printf("%d\n", gcd(x, y)*(x / gcd(x, y))*(y / gcd(x, y)));

	//看到结果
	getchar();
	getchar();

	return 0;
}