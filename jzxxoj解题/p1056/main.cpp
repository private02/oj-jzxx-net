#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：使用除法*/

int main()
{
	int n, m;

	scanf("%d%d", &n, &m);
	printf("%d\n", (m / n) + 1);

	getchar();
	getchar();

	return 0;
}