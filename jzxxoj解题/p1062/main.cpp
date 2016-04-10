#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*Ë¼Â·£ºÑ­»·¡£*/

int main()
{
	int n, ans = 0;
	scanf("%d", &n);

	for (int i = 1;i <= n;i++)
	{
		ans = ans + ((1 + i)*i / 2);
	}

	printf("%d\n", ans);

	getchar();
	getchar();

	return 0;
}