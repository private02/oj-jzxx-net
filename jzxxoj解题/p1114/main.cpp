#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

/*思路：输入一个字符串，然后循环求解。*/

int main()
{
	char number[201];
	int ans = 0;
	scanf("%s", &number);

	for (int i = 0;i < strlen(number);i++)
	{
		ans = ans + number[i] - 48;
	}

	printf("%d\n", ans);

	getchar();
	getchar();

	return 0;
}