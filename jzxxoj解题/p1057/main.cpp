#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;

/*Ë¼Â·£ºsort*/

struct fs {
	int fsx;
	int rs;
};

bool compare(fs a, fs b)
{
	return a.fsx > b.fsx;
}

int main()
{
	int n, m , l = 0;
	scanf("%d", &n);

	fs f[100] = { -1,-1 };
	bool fx = true;
	for (int i = 0;i < n;i++)
	{
		fx = true;
		scanf("%d", &m);
		for (int j = 0;j < l;j++)
		{
			if (f[j].fsx == m)
			{
				fx = false;
				f[j].rs++;
			}
		}
		if (fx)
		{
			f[l].fsx = m;
			f[l].rs = 1;
			l++;
		}
	}

	sort(f, f + l, compare);

	int score, ans = 1;

	scanf("%d", &score);

	for (int i = 0;i < l;i++)
	{
		if (f[i].fsx == score)
		{
			printf("%d\n", ans);
			getchar();
			getchar();
			return 0;
		}
		ans = ans + f[i].rs;
	}

	return 0;
}