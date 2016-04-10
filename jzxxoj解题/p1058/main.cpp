#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;
/*思路：使用sort，再根据题目模拟。*/

int main()
{
	int n, a[51], ans[51];

	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}

	sort(a, a + n);

	int left = 0, right = n - 1;

	for (int i = 0;i < n;i++)
	{
		if (i % 2 == 0)
		{
			ans[left] = a[i];
			left++;
		}
		else {
			ans[right] = a[i];
			right--;
		}
	}

	for (int i = 0;i < n - 1;i++)
	{
		printf("%d ", ans[i]);
	}

	printf("%d\n", ans[n - 1]);

	getchar();
	getchar();

	return 0;
}