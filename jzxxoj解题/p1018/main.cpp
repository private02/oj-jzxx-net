#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：if判断。
int main()
{
	int x;
	scanf("%d", &x);
	//判断
	if (x < 10) printf("A\n"); else
		if (x >= 10 && x < 20) printf("B\n"); else
			if (x >= 20 && x < 40) printf("C\n"); else
				if (x >= 40 && x < 50) printf("D\n"); else
					printf("E\n");

	//看到结果
	getchar();
	getchar();

	return 0;
}