#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "请输入两个正整数：";
	cin >> a >> b;
	int first = (a > b ? a : b), second = (a > b ? b : a);
	bool object = true;
	int remainder = first % second;
	if (remainder == 0)
		cout << "这两个数的最大公约数为：" << second;
	else
	{
		while (object)
		{
			int a = remainder;
			remainder = second% a;
			if (remainder == 0)
			{
				object = false;
				cout << "这两个数的最大公约数为：" << a;
			}
			second = a;
		}
	}
}