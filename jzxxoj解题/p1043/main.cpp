#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：所要求的奇数数列的首项为(n*n-n+1)，长度为n*/

int main()
{
	int n;
	scanf("%d", &n);

	int current = (n*n - n + 1) + (2 * (n - 1));

	for (int i = 1;i < n;i++)
	{
		printf("%d ", current);
		current = current - 2;
	}
	printf("%d\n", current);

	getchar();
	getchar();

	return 0;
}