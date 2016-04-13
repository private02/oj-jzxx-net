#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main()
{
	char str[30] = { 0 };
	int i = 0;

	while (scanf("%c", &str[i]) != EOF)
	{
		i++;
	}

	int t = 0;

	for (int j = 0;j < i;j++)
	{
		if (str[j] == '=')
		{
			t = j;
			break;
		}
	}
	
	int answer = 0;

	for (int j = t + 1;j < i;j++)
	{
		if (str[j] == '\n')
		{
			break;
		}
		answer = answer * 10 + (str[j] - 48);
	}

	for (int xy = 0;xy < t - 1;xy++)
	{
		int my1 = 0, my2 = 0;

		for (int j = 0;j <= xy;j++)
		{
			my1 = my1 * 10 + (str[j] - 48);
		}

		for (int j = xy+1;j < t;j++)
		{
			my2 = my2 * 10 + (str[j] - 48);
		}

		if (my1 + my2 == answer)
		{
			for (int j = 0;j < i;j++)
			{
				printf("%c", str[j]);
				if (j == xy)
				{
					printf("+");
				}
			}
			getchar();
			getchar();

			return 0;
		}
	}

	printf("Impossible!\n");

	getchar();
	getchar();

	return 0;
}