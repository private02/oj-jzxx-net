#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：循环搞定。自己看懂。记得提交时把%I64d改成%lld。*/

int main()
{
	long long n, x = 1;
	scanf("%I64d", &n);
	
	while (x < n)
	{
		x *= 2;
	}

	if (x == n)
	{
		printf("%I64d\n", x);
		
		getchar();
		getchar();

		return 0;
	}

	long long y = x / 2;
	
	if ((n - y) <= (x - n)) /*等于的话输出小的。*/
	{
		printf("%I64d\n", y);
	}
	else {
		printf("%I64d\n", x);
	}

	getchar();
	getchar();

	return 0;
}