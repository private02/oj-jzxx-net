#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：直接用公式。

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", (1 + n)*n / 2); //高斯求和公式。
	//看到结果
	getchar();
	getchar();

	return 0;

}
