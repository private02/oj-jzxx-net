#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <set>
using namespace std;

/*思路：使用STL中的set*/

int main()
{
	int n,m;
	set<int> x;

	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &m);
		x.insert(m);
	}

	int score;
	scanf("%d", &score);

	set<int>::iterator iter;
	set<int>::iterator iter1;
	int ans = 0;

	if ((iter = x.find(score)) != x.end())
	{
		for (iter1 = x.begin();iter1 != x.end();++iter1)
		{
			++ans;
			if (iter == iter1)
			{
				printf("%d\n", ans);
				getchar();
				getchar();
				return 0;
			}
		}
	}

	return 0;
}