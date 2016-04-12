#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：读入字符串，转化成数后计算。*/

int days[12] = {
	31,28,31,30,31,30,31,31,30,31,30,31
};

int main()
{
	char str[100] = { 0 };
	int i = 0;

	while (scanf("%c", &str[i]) != EOF)
	{
		i++;
	}

	int n = 0, y = 0, r = 0;
	i = 0;

	while (str[i] != '-')
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}

	i++;
	
	while (str[i] != '-')
	{
		y = y * 10 + (str[i] - 48);
		i++;
	}

	i++;

	while (str[i] != '\n')
	{
		r = r * 10 + (str[i] - 48);
		i++;
	}

	int ans = 0;

	for (int i = 0;i < y - 1;i++)
	{
		if (i == 2 && (n % 4 == 0 && n % 100 != 0 || n % 400 == 0))
		{
			ans += days[i] + 1;
		}
		else {
			ans += days[i];
		}

	}

	ans += r;

	printf("%d\n", ans);


	getchar();
	getchar();

	return 0;
}