#include <iostream>
using namespace std;
//思路：用字符数组,其实题目意思就是倒序输出。注意0的处理。
int main()
{
	char chr[3] = { 0 };
	for (int i = 0;i < 3;i++)
	{
		cin >> chr[i];
	}
	cin.get();
	bool f = false;

	for (int i = 2;i >= 0;i--)
	{
		if (chr[i] != '0') f = true;
		if (f)
			cout << chr[i];
	}
	cout << endl;

	//看到结果
	cin.get();
	

	return 0;
}