#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
using namespace std;
/*思路：高精度乘单精度，具体算法查资料或自己理解以下代码。*/

int main()
{
	int a[32];

	a[0] = 1;
	a[1] = 1;

	int carry = 0;

	for (int i = 1;i <= 100;i++)
	{
		for (int j = 1;j <= a[0];j++)
		{
			a[j] = a[j] * 2 + carry;
			carry = a[j] / 10;
			a[j] = a[j] % 10;
		}
		if (carry)
		{
			a[0]++;
			a[a[0]] = carry;
			carry = 0;
		}
	}

	for (int i = a[0];i > 0;i--)
	{
		printf("%d", a[i]);
	}
	printf("\n");

	getchar();

	return 0;
}