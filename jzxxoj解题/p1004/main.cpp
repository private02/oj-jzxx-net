#include <iostream>
using namespace std;

//思路：用字符
int ans;

int main()
{
	char c;
	for (int i = 0;i < 3;i++)
	{
		cin >> c;
		ans = ans + (int)(c - 48);
	}
	cout << ans << endl;
	
	//看到结果
	cin.get();
	cin.get();

	return 0;
}