#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;
//思路：拆百位，十位，个位，再排序
int main()
{
	int x;
	scanf("%d", &x);

	int a[3];
	//拆位
	a[0] = x / 100;
	a[1] = x / 10 % 10;
	a[2] = x % 10;

	sort(a, a + 3);
	//输出
	printf("%d\n", a[2] * 100 + a[1] * 10 + a[0]);

	//看到结果
	getchar();
	getchar();

	return 0;
}