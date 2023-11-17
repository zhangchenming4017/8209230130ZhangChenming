#include<iostream>
using namespace std;
int main()
{
	double num;
	cout << "请输入一个数：";
	cin >> num;
	double a, b, c;
	a = num;
	while (1)
	{
		b = (a + num / a) / 2;
		c = (b + num / b) / 2;
		if ((b - c) > -1e-5 && (b - c) < 1e-5)
		{
			cout << "这个数的平方根为：" << c;
			break;
		}
		a = c;
	}
}