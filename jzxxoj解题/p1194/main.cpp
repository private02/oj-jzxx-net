#include <iostream>
#include <stack>
#include <string>
using namespace std;
/*思路：这种题目对于我这种菜鸟来说还是比较难的。
具体思路就是先把读入的中缀表达式转化为后缀表达式，
然后再计算后缀表达式。
*/

bool one(char c)
{
	return (c == '+' || c == '-'); //判断是否是一级运算
}

bool two(char c)
{
	return (c == '*' || c == '/'); //判断是否是二级运算
}

string suffixdeal(string in)
{
	stack<char> st; //建立一个字符栈
	string temp;  //后缀表达式存储在这个临时字符串中

	for (int i = 0;i < in.size();i++) //in.size()的返回值是in这个字符串的长度
	{
		if (isdigit(in[i]) || in[i] == '.') //isdigit函数是用来判断字符是否是阿拉伯数字的，由于有小数计算，所以小数点也是合法的
		{
			while (isdigit(in[i]) || in[i] == '.') temp += in[i++]; //这个就不用说了，取数。
			i--; //把多的给减回来
			temp = temp + " "; //一个数已经完了，加一个空格
		}
		else
			if (one(in[i])) //如果是一级运算
			{
				while (st.size() && (one(st.top()) || two(st.top()))) //如果运算等级大于等于一级则持续出栈
				{
					temp += st.top(); //后缀表达式加上运算符
					st.pop(); //出栈
				}
				st.push(in[i]); //把这个运算压进栈里
			}
			else if (in[i] == ')') //如果等于右括号
			{
				while (st.top() != '(') //如果不是左括号则持续出栈
				{
					temp += st.top(); //把栈顶加到后缀表达式里
					st.pop(); //出栈
				}
				st.pop(); //把左括号出栈
			}
			else if (two(in[i])) //如果是二级运算
			{
				while (st.size() && two(st.top())) //如果运算等级大于等于二级则持续出栈
				{
					temp += st.top(); //把栈顶运算符加到后缀表达式里
					st.pop(); //出栈
				}
				st.push(in[i]); //把这个运算压进栈里
			}
			else
				st.push(in[i]); //其他情况压栈


	}

	//持续出栈，把栈里的内容都加到后缀表达式里
	while (st.size())
	{
		temp += st.top();
		st.pop();
	}

	return temp; //返回后缀表达式
}

double GetNum(string suffix, int l) //取数，自己看懂
{
	bool f = true;
	int i = l;
	double num = 0.0;
	double res = 0.0;
	while (suffix[i] != ' ')
	{
		if (suffix[i] == '.')
		{
			f = false;
			num = 0.1;
			i++;
			continue;
		}
		if (f)
		{
			res = res * 10 + (suffix[i] - 48);
		}
		else {
			res = res + (suffix[i] - 48) * num;
			num = num*0.1;
		}
		i++;
	}
	return res;
}

int calci(string suffix, int l) //计算下标
{
	int i = l;
	while (suffix[i] != ' ')
	{
		i++;
	}
	return i;
}

double calc(string suffix)
{
	stack<double> st; //数栈
	double res = 0.0; //后缀表达式的计算结果

	for (int i = 0;i < suffix.size();i++)
	{
		if (isdigit(suffix[i]) || suffix[i] == '.')
		{
			st.push(GetNum(suffix, i)); //取数并压到栈里
			i = calci(suffix, i);
		}
		else if (suffix[i] == ' ') //等于空格进入下一次循环
		{
			continue;
		}
		else if (suffix[i] == '+') //计算加
		{
			res = st.top();
			st.pop();
			res = res + st.top();
			st.pop();
			st.push(res);
		}
		else if (suffix[i] == '-') //计算减
		{
			res = st.top();
			st.pop();
			res = st.top() - res;
			st.pop();
			st.push(res);
		}
		else if (suffix[i] == '*') //计算乘
		{
			res = st.top();
			st.pop();
			res = res * st.top();
			st.pop();
			st.push(res);
		}
		else if (suffix[i] == '/') //计算除
		{
			res = st.top();
			st.pop();
			res = st.top() / res;
			st.pop();
			st.push(res);
		}
	}
	return res; //返回后缀表达式的计算结果
}

int main()
{
	string infix, suffix;
	cin >> infix;
	suffix = suffixdeal(infix);
	cout << calc(suffix) << endl;

	getchar();
	getchar();

	return 0;
}