#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

const double pi = 3.1415926;

/*思路：根据公式求面积与周长，输出用%.2lf，2代表保留2位小数。
需要强制类型转换。
*/
int main()
{
	int x;
	scanf("%d", &x);
	printf("%.2lf\n", (double)x*x*pi); //面积：pi*(r^2)
	printf("%.2lf\n", (double)2*x*pi); //周长：2r*pi

	//看到结果
	getchar();
	getchar();

	return 0;
}