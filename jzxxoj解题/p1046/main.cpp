#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//Ë¼Â·£ºÍ°¡£
int main()
{
	int a[129] = { 0 };
	char c;
	scanf("%c", &c);
	while (c != '.')
	{
		a[c]++;
		scanf("%c", &c);
	}

	for (int i = 1;i < 129;i++)
	{
		if (a[i])
		{
			printf("%c", i);
		}
	}

	printf("\n");

	for (int i = 1;i < 129;i++)
	{
		if (a[i])
		{
			printf("%d", a[i]);
		}
	}

	printf("\n");

	getchar();
	getchar();

	return 0;
}