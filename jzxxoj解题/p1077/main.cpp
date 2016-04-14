#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*Ë¼Â·£ºÅÐ¶ÏÃ¶¾Ù¡£*/

struct Sx {
	int x;
	int y;
};

int main()
{
	int n, m, a[100], b[100];
	scanf("%d%d", &n, &m);

	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0;i < m;i++)
	{
		scanf("%d", &b[i]);
	}

	int temp = 0;
	Sx p[10001];

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			bool f = false;
			for (int k = 0;k < temp;k++)
			{
				if (p[k].x == a[i] && p[k].y == b[j] || p[k].x == b[j] && p[k].y == a[i])
				{
					f = true;
					break;
				}
			}
			if (!f)
			{
				p[temp].x = a[i];
				p[temp].y = b[j];
				temp++;
			}
		}
	}

	printf("%d\n", temp);

	getchar();
	getchar();

	return 0;
}