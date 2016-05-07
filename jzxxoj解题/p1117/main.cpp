#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
using namespace std;

/*Ë¼Â·£º½»»»a[i] = a[n-i-1]*/

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a[100], n;

	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0;i < n / 2;i++)
	{
		swap(&a[i] ,&a[n - i - 1]);
	}

	for (int i = 0;i < n - 1;i++)
	{
		printf("%d ", a[i]);
	}
	printf("%d\n", a[n - 1]);

	getchar();
	getchar();

	return 0;
}