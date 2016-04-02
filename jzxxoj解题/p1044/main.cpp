#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using std::sort;

/*思路：使用库排序*/

int main()
{
	int a[10];

	for (int i = 0;i < 10;i++)
	{
		scanf("%d", &a[i]);
	}

	sort(a, a + 10);

	for (int i = 9;i > 0;i--)
	{
		printf("%d ", a[i]);
	}

	printf("%d\n", a[0]);

	getchar();
	getchar();

	return 0;
}