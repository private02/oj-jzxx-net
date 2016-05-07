#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
using namespace std;

/*思路：双重循环。*/

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n - i - 1;j++)
			printf(" ");
		for (int j = 0;j < (n * 2 + 1) - ((n - i) * 2);j++)
			printf("%c", j + 65);
		printf("\n");
	}

	getchar();
	getchar();

	return 0;
}