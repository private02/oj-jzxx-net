#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：循环，直到结果超出X为止
int main()
{
	int limit, i;
	scanf("%d", &limit);
	double ans = 0;
	i = 0;
	while (ans <= limit)
	{
		i++;
		ans = ans + (double)((double)1 / (double)i);
	}

	printf("%d\n", i);

	getchar();
	getchar();

	return 0;
}