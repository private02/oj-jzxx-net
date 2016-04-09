#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#define Number 10

/*思路：代码实在有点多。我的思路是这样的：
开始，先判断这个子序列是递增还是递减子序列，然后枚举，每次判断还是否遵循之前的规律，不遵循，
从之前结束的地方继续找，直到只剩一个数便Break。
*/

int sum = 0;
int main()
{
	int a[Number+1], f = true;
	bool ax[Number];
	
	for (int i = 0;i < Number;i++)
	{
		ax[i] = true;

	}

	for (int i = 0;i < Number;i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0;i < Number;i++) //统计个数
	{
		if (i == 9)
		{
			break;
		}
		if (!ax[i])
		{
			continue;
		}
		f = true;
		for (int j = i;j < Number;j++)
		{
			if (j == i)
			{
				if (a[i + 1] < a[i])
				{
					f = false;
				}
			}
			else {
				ax[j - 1] = false;
			}
			if (j == 9)
			{
				sum++;
				break;
			}
			if (f)
			{
				if (a[j + 1] < a[j])
				{
					sum++;
					break;
				}
			}
			if (!f)
			{
				if (a[j + 1] > a[j])
				{
					sum++;
					break;
				}
			}
		}

	}

	printf("%d\n", sum);

	for (int i = 0;i < Number;i++)
	{
		ax[i] = true;

	}

	for (int i = 0;i < Number;i++) //输出
	{
		if (i == 9)
		{
			break;
		}
		if (!ax[i])
		{
			continue;
		}
		f = true;
		for (int j = i;j < Number;j++)
		{
			if (j == i)
			{
				if (a[i + 1] < a[i])
				{
					f = false;
				}
			}
			else {
				ax[j - 1] = false;
			}
			if (j == 9)
			{
				for (int k = i;k < j;k++)
				{
					printf("%d ", a[k]);
				}
				printf("%d\n", a[j]);
				break;
			}
			if (f)
			{
				if (a[j + 1] < a[j])
				{
					for (int k = i;k < j;k++)
					{
						printf("%d ", a[k]);
					}
					printf("%d\n", a[j]);
					break;
				}
			}
			if (!f)
			{
				if (a[j + 1] > a[j])
				{
					for (int k = i;k < j;k++)
					{
						printf("%d ", a[k]);
					}
					printf("%d\n", a[j]);
					break;
				}
			}
		}

	}

	getchar();
	getchar();

	return 0;
}

