#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
using namespace std;

/*Ë¼Â·£ºË³Ðò²éÕÒ¡£*/

int main()
{
	int n, a[100], x;
	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}

	scanf("%d", &x);
	
	for (int i = 0;i < n;i++)
	{
		if (a[i] == x)
		{
			printf("%d\n", i + 1);
			getchar();
			getchar();
			return 0;
		}
	}

	printf("-1\n");

	getchar();
	getchar();

	return 0;
}