#define _CRT_SECURE_NO_WARNINGS
#include <iostream> //iostream里包含stdio.h与stdlib.h
using namespace std;
/*思路：模拟*/

int main()
{
	int n, y, r, ans = 1;
	scanf("%d%d%d", &n, &y, &r);
	for (int i = 1980;i < n;i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			ans = ans + 366 % 7;
		}else{
			ans = ans + 365 % 7;
		}
	}

	int res = (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) ? 1 : 0;

	for (int i = 1;i < y;i++)
	{
		switch (i)
		{
		case 1:
			ans = ans + 31 % 7;
			break;
		case 2:
			ans = ans + (28 + res) % 7;
			break;
		case 3:
			ans = ans + 31 % 7;
			break;
		case 4:
			ans = ans + 30 % 7;
			break;
		case 5:
			ans = ans + 31 % 7;
			break;
		case 6:
			ans = ans + 30 % 7;
			break;
		case 7:
			ans = ans + 31 % 7;
			break;
		case 8:
			ans = ans + 31 % 7;
			break;
		case 9:
			ans = ans + 30 % 7;
			break;
		case 10:
			ans = ans + 31 % 7;
			break;
		case 11:
			ans = ans + 30 % 7;
			break;
		case 12:
			ans = ans + 31 % 7;
			break;
		}
	}

	for (int i = 1;i < r;i++)
	{
		ans = (ans + 1) % 7;
	}

	ans = ans % 7;

	printf("%d\n", ans + 1);

	getchar();
	getchar();

	return 0;
}