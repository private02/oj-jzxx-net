#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：先打200以内素数表，再两重循环枚举。*/

const int s[] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,
61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167
,173,179,181,191,193,197,199 };

int main()
{
	int n;
	scanf("%d", &n);
	
	for (int i = 4;i <= n;i = i + 2)
	{
		if (i == 188)
		{
			int abc = 1;
		}
		if (i == 4)
		{
			printf("4=2+2\n");
			continue;
		}
		if (i == 6)
		{
			printf("6=3+3\n");
			continue;
		}
		if (i == 8)
		{
			printf("8=3+5\n");
			continue;
		}
		int j = 0;//, ts = i;
		while (true)
		{
			if (s[j] > i / 2)
			{
				break;
			}
			int x = i - s[j];
			bool f = false;

			for (int k = 0;k < 46;k++)
			{
				if (s[k] == (i - s[j]))
				{
					f = true;
					break;
				}
			}

			if (f)
			{
				printf("%d=%d+%d\n", i, s[j], x);
			}

			j++;
		}
	}

	getchar();
	getchar();

	return 0;
}