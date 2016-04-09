#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*Ë¼Â·£ºËÆp1032*/

int main()
{
	for (int b = 1;b < 10;b++)
	{
		for (int t = 0;t < 10;t++)
		{
			for (int o = 0;o < 10;o++)
			{
				
				if ((b * 100 + t * 10 + o) == (b*b*b + t*t*t + o*o*o))
				{
					printf("%d\n", b * 100 + t * 10 + o);
				}
			}
		}
	}

	
	getchar();
	getchar();

	return 0;
}