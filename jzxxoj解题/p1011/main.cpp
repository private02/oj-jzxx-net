#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：用判断就可以搞定
int main()
{
	int a;
	scanf("%d", &a);
	if (a <= 10)
		printf("%.2lf\n", 2.5); else
		printf("%.2lf\n", 2.5 + (a - 10)*1.5);

	//看到结果
	getchar();
	getchar();

	return 0;
}