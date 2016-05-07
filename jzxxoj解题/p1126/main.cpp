#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cstring>

int main()
{
	char num[1001];
	int res, m;
	scanf("%s", &num);
	scanf("%d", &m);
	res = 0;
	int len = strlen(num);
	num[len] = '\0';

	while (res < m)
	{
		for (int i = 0;i < len;i++)
		{
			if (num[i] > num[i + 1])
			{
				for (int j = i + 1;j < len;j++)
				{
					num[j - 1] = num[j];
				}
				num[len - 1] = '\0';
				len = strlen(num);
				res++;
				break;
			}
		}
	}


	printf("%s\n", num);

	getchar();
	getchar();

	return 0;
}