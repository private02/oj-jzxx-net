#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

//思路：if判断

int main()
{
	int x;
	scanf("%d", &x);
	if (x > 85)
		printf("VERY GOOD\n");
	if (x <= 85 && x >= 60)
		printf("GOOD\n");
	if (x < 60)
		printf("BAD\n");
	
	//看到结果
	getchar();
	getchar();

	return 0;
}