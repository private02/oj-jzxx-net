#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
//思路：写一个用来判断素数的函数，然后主函数枚举。
bool is_prime(int x) //判断素数
{
	if (x == 1)
		return false;

	for (int i = 2;i <= (int)sqrt(x);i++)
		if (x%i == 0)
			return false;
	return true;
}

int main()
{
	int begin, end, ans = 0;
	scanf("%d%d", &begin, &end);

	bool current = false; //保存当前的数是否是素数
	for (int i = begin;i <= end;i++)
	{
		current = is_prime(i);
		if (current) ans++;
	}

	printf("%d\n", ans);
	
	getchar();
	getchar();

	return 0;
}