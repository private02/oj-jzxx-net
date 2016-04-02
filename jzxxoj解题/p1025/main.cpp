#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;
//思路：排序后输出。
int main()
{
	int n;
	scanf("%d", &n);
	int a[20];
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}

	sort(a, a + n);//排序

	printf("%d %d\n", a[n - 1], a[0]);

	//看到结果
	getchar();
	getchar();

	return 0;
}