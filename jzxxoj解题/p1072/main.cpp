#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;

/*思路：最好情况是线段的两端都在端点上。因此两重循环枚举即可。*/

int main()
{
	int n, a[100], min = 999999;

	scanf("%d", &n);

	for (int i = 1;i < n;i++)
	{
		scanf("%d", &a[i]);
	}

	a[0] = 0;

	sort(a, a + n); /*输入的数据可能不是有序的，这时候我们需要排序。*/

	for (int i = 1;i < n - 4;i++)
	{
		for (int j = i + 2;j < n - 2;j++)
		{
			int x = a[i] + (a[j] - a[i + 1]) + (a[n - 1] - a[j + 1]);
			if (x < min)
			{
				min = x;
			}
		}
	}

	printf("%d\n", min);

	getchar();
	getchar();

	return 0;
}