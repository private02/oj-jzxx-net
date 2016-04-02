#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：先打印 总行数-当前行数 个空格，
再倒打，然后顺打。
*/
int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1;i <= n;i++) //i:行
	{
		for (int j = 1;j <= n - i;j++) //打印空格
		{
			printf(" ");
		}

		char x = 'A';
		//先倒着打印
		for (int j = i - 1;j >= 0;j--)
		{
			printf("%c", x + j);
		}
		//再顺着打印
		for (int j = 1;j < i;j++)
		{
			printf("%c", x + j);
		}
		printf("\n"); //打印回车
	}

	getchar();
	getchar();

	return 0;
}