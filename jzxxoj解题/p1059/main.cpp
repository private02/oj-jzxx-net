#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

/*思路：用一个布尔变量来控制。遇见一个数字把这个布尔变量变true，
如果它原来是false则把计数的变量置为当前字符所对应的数，否则就是
计数变量=（当前数*10+当前字符所对应的数）。见到其他字母布尔变量变false，
计数变量清空。记录最大的数与它的起始位置。
*/

int main()
{
	char str[256] = { 0 };
	char c;
	int i = -1;

	scanf("%c", &c);

	while (c != '\n')
	{
		i++;
		str[i] = c;
		scanf("%c", &c);
	}

	int sum = 0, max = -999999, ans = -1 , temp = -1;
	bool f = false;

	for (int j = 0;j <= i;j++)
	{

		bool jl = f;
		f = (str[j] >= '0' && str[j] <= '9');
		if (!f)
		{
			if (sum > max)
			{
				max = sum;
				ans = temp;
			}
			sum = 0;temp = 0;
			continue;
		}
		if (!jl && f)
		{
			temp = j + 1;
			sum = str[j] - 48;

		}
		else {
			sum = (sum * 10) + (str[j] - 48);
		}

	}

	if (sum > max)
	{
		max = sum;
		ans = temp;
	}
	sum = 0;temp = 0;

	printf("%d\n", ans);

	getchar();
	getchar();

	return 0;
}
