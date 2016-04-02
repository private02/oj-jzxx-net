#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：短除法：
先读入一个数N，一直把它除以2，并记录余数，
然后倒着输出便是N对应的二进制数。*/

int main()
{
	int n, xb = 0; //xb:下标
	scanf("%d", &n);
	int a[32];

	while (n > 0)
	{
		xb++;
		a[xb] = n % 2;
		n = n / 2;
	}

	for (int i = xb;i > 0;i--)
	{
		printf("%d", a[i]);
	}

	printf("\n");

	getchar();
	getchar();

	return 0;
}