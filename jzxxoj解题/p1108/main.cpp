#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
using namespace std;

/*思路：双重循环。*/

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0;i < n*2+1;i++)
	{
		for (int j = 0;j < abs(n - i);j++)
			printf(" ");
		for (int j = 0;j < (n * 2 + 1) - (abs(n - i) * 2);j++)
			printf("*");
		printf("\n");
	}

	getchar();
	getchar();

	return 0;
}