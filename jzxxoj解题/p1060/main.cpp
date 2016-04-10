#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：递归枚举每一种方案。*/
bool bj[5][5];
int ans;
int bc[5];

void dfs(int c)
{
	if (c == 5)
	{
		for (int i = 0;i < 5;i++)
		{
			for (int j = 0;j < 5;j++)
			{
				if (bj[i][j])
				{
					if (bc[i] == bc[j])
						return;
				}
			}
		}
		ans++;
		return;
	}

	bc[c] = 1;
	dfs(c + 1);

	bc[c] = 2;
	dfs(c + 1);

	bc[c] = 3;
	dfs(c + 1);

	bc[c] = 4;
	dfs(c + 1);

}

int main()
{
	int n, x, y;
	scanf("%d", &n);

	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			bj[i][j] = false;
		}
	}

	for (int i = 0;i < n;i++)
	{
		scanf("%d%d", &x, &y);
		bj[x - 1][y - 1] = true;
		bj[y - 1][x - 1] = true;
	}

	dfs(0);

	printf("%d\n", ans);
	getchar();
	getchar();

	return 0;

}