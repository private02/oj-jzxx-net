#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
using namespace std;

/*思路：循环求解。*/

int queue[10];

int main()
{
	int n, max = -99999;
	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		scanf("%d", &queue[i]);
		if (max < queue[i])
		{
			max = queue[i];
		}
	}

	for (int i = 0;i < n;i++)
	{
		if (queue[i] == max)
		{
			printf("%d\n", i + 1);
		}
	}


	getchar();
	getchar();

	return 0;
}