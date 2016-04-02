#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;
#define _SIZE_ 3

//思路：排序后判断
int main()
{
	int a[_SIZE_] = { 0 };
	for (int i = 0;i < _SIZE_;i++)
	{
		scanf("%d", &a[i]);
	}

	sort(a, a + _SIZE_);//排序

	bool f = true;
	for (int i = 1;i < _SIZE_;i++)
	{
		if (a[i - 1] + 1 != a[i])
			f = false;
	}

	if (f) printf("TRUE\n"); else
		printf("FALSE\n");

	//看到结果
	getchar();
	getchar();

	return 0;
}