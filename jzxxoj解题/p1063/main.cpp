#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
using namespace std;

/*思路：还是使用sort。

警告：提交时把%I64d改成%lld。
*/

struct gg{
	int lon;
	int thic;
	long long code;
};

bool compare(gg a,gg b)
{
	if (a.lon > b.lon) 
	{
		return true;
	} /*if then*/
	else
	{
		if (a.lon == b.lon)
		{
			if (a.thic < b.thic)
			{
				return true;
			} /*if else if then if then*/
			else {
				if (a.thic == b.thic)
				{
					if (a.code > b.code)
					{
						return true;
					} /*if else if then if else if then if then*/
					else
					{
						return false;
					}
				} /*if else if then if else if then*/
				else {
					return false;
				}
			}/*if else if then if else*/

		} /*if else if then*/
		else
		{
			return false;
		} /*if else if else*/
	} /*if else*/
}

int main()
{
	int n;
	gg arr[1001];

	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		scanf("%d%d%I64d", &arr[i].lon, &arr[i].thic, &arr[i].code);
	}

	sort(arr, arr + n, compare);

	printf("%I64d\n", arr[0].code);

	getchar();
	getchar();

	return 0;
}