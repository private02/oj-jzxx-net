#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：循环求最大公约数。*/
int gcd(int a, int b)
{
	return (b == 0) ? a : gcd(b, a%b);
}
int main()
{
	int n ,a[51];
	scanf("%d", &n);

	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}

	int ans = gcd(a[0], a[1]);

	for (int i = 2;i < n;i++)
	{
		ans = gcd(ans, a[i]);
	}

	printf("%d\n", ans);

	getchar();
	getchar();

	return 0;

}