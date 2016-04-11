#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：枚举，先判断，再记录。*/


bool f;

struct jm {
	int x;
	int y;
};

jm a[20];

int main()
{
	int n, m, ans = 999999;
	scanf("%d", &n);

	

	for (int i = 0;i < n;i++)
	{
		scanf("%d%d", &a[i].x, &a[i].y);
	}

	scanf("%d", &m );


	int sum = 0;

	for (int i = 0;i < n;i++)
	{
		sum = 0;
		
		for (int j = i - 1;j >= 0;j--)
		{
			if (a[j].y<a[i].y)
			{
				sum = sum + a[j].x;
			}
			else {
				break;
			}
		}
		for (int j = i + 1;j < n;j++)
		{
			if (a[j].y<a[i].y)
			{
				sum = sum + a[j].x;
			}
			else {
				break;
			}
		}
		
		sum = sum + a[i].x;
		
		if (sum > m)
		{
			if (a[i].y + m < ans)
			{
				ans = a[i].y + m;
			}
		}
	}

	printf("%d\n", ans);

	getchar();
	getchar();
	
	return 0;
}