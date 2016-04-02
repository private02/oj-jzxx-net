#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

//思路：死模拟
int a, b, c, d, e, t;

int main()
{
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	t = a / 3;//第1个小朋友分
	a = t;
	e = e + t;
	b = b + t;
	t = b / 3;//第2个小朋友分
	b = t;
	c = c + t;
	a = a + t;
	t = c / 3;//第3个小朋友分
	c = t;
	b = b + t;
	d = d + t;
	t = d / 3;//第4个小朋友分
	d = t;
	c = c + t;
	e = e + t;
	t = e / 3;//第5个小朋友分
	e = t;
	a = a + t;
	d = d + t;

	printf("%d %d %d %d %d\n", a, b, c, d, e);

	//看到结果
	getchar();
	getchar();
	return 0;
}