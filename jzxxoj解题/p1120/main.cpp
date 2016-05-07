#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
using namespace std;

/*思路：输入输出。*/

int main()
{
	int n, x, a[10];
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);

	for (int i = 0;i < x - 1;i++)
	{
		printf("%d ", a[i]);
	}

	for (int i = x;i < n;i++)
	{
		printf("%d ", a[i]);
	}

	printf("%d\n", a[x - 1]);
	getchar();
	getchar();

	return 0;
}