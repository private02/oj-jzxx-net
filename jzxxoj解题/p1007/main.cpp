#include <iostream>
using std::cin;
using std::cout;
using std::endl;
//思路：用字符数组全搞定

int main()
{
	char chr[4] = { 0 };

	for (int i = 0;i < 4;i++) //顺序输入
	{
		cin >> chr[i];
	}
	
	for (int i = 3;i >= 0;i--)  //倒序输出
	{
		cout << chr[i];
	}

	cout << endl;
	//看到结果
	cin.get();
	cin.get();
	


	return 0;
}