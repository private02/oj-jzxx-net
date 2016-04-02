#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*
思路：写一个函数返回一个数组。然后输出。
分解质因数：先有一个变量i，初始值为2，作用为枚举n能不能被i整除，
能整除便执行n=n/i，直到无法整除为止。每次整除，数组下标增加1，
保存i。不能整除之后就把i加1。直到i大于n时停止循环。
注意保存起来的数不可能为合数，因为我们已经先把组成这个合数的素因子给除去了。
*/

int* decomposition(int n)
{
	//这里p[0]存储下标。
	int i = 2;
	int *p = new int[32];
	p[0] = 0;
	while (i <= n)
	{
		while (n%i == 0) //判断能否整除
		{
			p[0]++;
			n = n / i;
			p[p[0]] = i;
		}
		i++;
	}

	return p;
}

int main()
{
	int n;
	scanf("%d", &n);

	int* ans;

	ans = decomposition(n);

	for (int i = 1;i < ans[0];i++)
	{
		printf("%d ", ans[i]);
	}
	printf("%d\n", ans[ans[0]]);

	getchar();
	getchar();

	return 0;
}