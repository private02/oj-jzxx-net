#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：2与32767之间仅有4个完全数。打表即可。*/

const int a[5] = { 6,28,496,8128,32768 }; //注意格式，32768这个数是用于输出换行的。
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	for (int i = 0;i < 4;i++)
	{
		if (a[i + 1] > m)
		{
			printf("%d\n", a[i]);
			break;
		}
		if (a[i] < n)
		{
			continue;
		}
		printf("%d ", a[i]);
	}

	getchar();
	getchar();

	return 0;
}