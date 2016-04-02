#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

//思路：用if判断就可解决该问题

int main()
{
	int n;
	scanf("%d", &n);

	if (n > 0) n++;
	if (n < 0) n--;

	printf("%d\n", n);
	//看到结果
	getchar();
	getchar();


	return 0;
}