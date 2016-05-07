#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

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

	for (int i = 0;i < n - 1;i++)
	{
		printf("%d ", a[i]);
	}
	printf("%d\n", a[n - 1]);

	getchar();
	getchar();

	return 0;
}