#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
//思路：直接输入
int main()
{
	char x, big_letter = 0, small_letter = 0, num = 0;

	while (scanf("%c", &x) != EOF)
	{
		if (x >= 'A'&& x <= 'Z')
		{
			big_letter++;
		}
		if (x >= 'a'&& x <= 'z')
		{
			small_letter++;
		}
		if (x >= '0' && x <= '9')
		{
			num++;
		}
	}

	printf("%d %d %d\n", big_letter, small_letter, num);

	getchar();
	getchar();

	return 0;
}