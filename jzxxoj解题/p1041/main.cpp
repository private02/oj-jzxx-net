#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
/*思路：和p1040差不多，先打印 总行数-当前行数 个空格，
再打印 （当前行数*2）-1 个 *，再打印 （总行数-当前行数）*2 个空格，
再打印 （当前行数*2）-1 个 *，再打印 （总行数-当前行数）*2 个空格，
最后打印 （当前行数*2）-1 个 *。
*/
int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1;i <= n;i++)
	{
		//前缀空格
		for (int j = 0;j < n - i;j++)
		{
			printf(" ");
		}
		//前面的*
		for (int j = 0;j < (i * 2) - 1;j++)
		{
			printf("*");
		}
		//前面空格
		for (int j = 0;j < (n - i) * 2;j++)
		{
			printf(" ");
		}
		//中间的*
		for (int j = 0;j < (i * 2) - 1;j++)
		{
			printf("*");
		}
		//中间空格
		for (int j = 0;j < (n - i) * 2;j++)
		{
			printf(" ");
		}
		//后面的*
		for (int j = 0;j < (i * 2) - 1;j++)
		{
			printf("*");
		}
		//换行
		printf("\n");
	}

	getchar();
	getchar();
	
	return 0;
}