#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
using namespace std;

/*思路：二进制加法。*/

int main()
{
	int n, a[15], carry = 0, ansa = 0, ansb = 0;
	scanf("%d", &n);

	a[0] = 1;
	for (int i = 1;i < 15;i++)
	{
		a[i] = 0;
	}

	for (int i = 0;i < n;i++)
	{
		a[1]++;
		carry = a[1] / 2;
		a[1] = a[1] % 2;
		for (int j = 2;j <= a[0];j++)
		{
			if (!carry)
			{
				break;
			}
			a[j] = a[j] + carry;
			carry = a[j] / 2;
			a[j] = a[j] % 2;
		}
		if (carry)
		{
			a[0]++;
			a[a[0]] = carry;
		}
		int A = 0, B = 0;
		for (int j = 1;j <= a[0];j++)
		{
			if (a[j])
			{
				A++;
			}
			else {
				B++;
			}		  
		}
		if (A > B)
		{
			ansa++;
		}
		else {
			ansb++;
		}
	}

	printf("%d %d\n", ansa, ansb);

	getchar();
	getchar();

	return 0;
}