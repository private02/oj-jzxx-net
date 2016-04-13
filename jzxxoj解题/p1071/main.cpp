#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

/*思路：使用switch-case。*/
int main()
{
	char c;

	while (scanf("%c", &c) != EOF)
	{
		switch (c)
		{
			case '\n':
				break;
			case 'O':
				printf("0");
				break;
			case 'l':
				printf("1");
				break;
			case 'Z':
				printf("2");
				break;
			case 'S':
				printf("5");
				break;
			case 'b':
				printf("6");
				break;
			case 'B':
				printf("8");
				break;
			case 'q':
				printf("9");
				break;
			default:
				printf("%c", c);
				break;
		}
	}

	printf("\n");

	getchar();
	getchar();

	return 0;
}