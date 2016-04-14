#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using std::sort;
/*Ë¼Â·£ºsort¡£*/

int main()
{
	int n, a[10];
	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}

	sort(a, a + n);
	printf("%d\n", a[n - 2]);

	getchar();
	getchar();

	return 0;
}