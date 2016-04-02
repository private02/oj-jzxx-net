#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>

bool is_prime(int x) //ÅĞ¶ÏËØÊı
{
	if (x == 1)
		return false;

	for (int i = 2;i <= (int)sqrt(x);i++)
		if (x%i == 0)
			return false;
	return true;
}

int main()
{
	int n;
	scanf("%d", &n);

	if (is_prime(n))
	{
		printf("T\n");
	}
	else {
		printf("F\n");
	}

	getchar();
	getchar();

	return 0;
}