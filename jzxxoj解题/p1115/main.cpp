#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

/*思路:使用普通的二重循环将会超时。因此，我们需要一个
变量来记录网速，将循环减至一重。C++栈上的空间无法定义大小
是1000001的数组，因此要用new来分配空间，记得要delete。*/

int main()
{
	double max = -99999.99;
	int d = 0;
	int n, m;
	int* a = new int[1000001];

	scanf("%d%d", &n, &m);

	for (int i = 1;i <= n;i++)
	{
		scanf("%d", &a[i]);
		if (i < m)
		{
			d = d + a[i];
		}
		else {
			if (i == m)
			{
				d = d + a[i];
			}
			else {
				d = d + a[i] - a[i - m];
			}
			if (max < (d / (double)m))
			{
				max = d / (double)m;
			}
		}
	}

	delete[] a;

	printf("%.2lf\n", max);

	getchar();
	getchar();

	return 0;
}