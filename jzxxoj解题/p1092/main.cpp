#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
/*思路：全转化成秒数即可。*/
int main()
{
	char str1[8], str2[8];

	for (int i = 0;i < 8;i++)
	{
		scanf("%c", &str1[i]);
	}

	getchar();
	for (int i = 0;i < 8;i++)
	{
		scanf("%c", &str2[i]);
	}

	int m1 = (((str1[0] - 48) * 10 + (str1[1] - 48)) * 3600) + (((str1[3] - 48) * 10 + (str1[4] - 48)) * 60) + (str1[6] - 48) * 10 + (str1[7] - 48); //第一个时间
	int m2 = (((str2[0] - 48) * 10 + (str2[1] - 48)) * 3600) + (((str2[3] - 48) * 10 + (str2[4] - 48)) * 60) + (str2[6] - 48) * 10 + (str2[7] - 48); //第二个时间
	
	printf("%d\n", m1 - m2);

	getchar();
	getchar();

	return 0;
}