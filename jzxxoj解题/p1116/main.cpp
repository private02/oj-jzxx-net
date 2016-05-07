#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

/*思路:sort排序，桶计数。*/

int main()
{
	int n, a[1500], t[2001];
	scanf("%d", &n);

	for (int i = 0;i < 2001;i++)
	{
		t[i] = 0;
	}

	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
		t[a[i]]++;
	}

	int max = -99999, num = -1;

	for (int i = 0;i < 2001;i++)
	{
		if (max < t[i])
		{
			max = t[i];
			num = i;
		}
	}

	printf("%d\n%d\n", num, max);

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