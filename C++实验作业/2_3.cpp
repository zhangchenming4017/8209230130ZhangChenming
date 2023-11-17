#include<iostream>
using namespace std;

// 输入三角形的三条边，求周长，并判断该三角形是否为等腰三角形（提示：要三边是否可以构成三角形）。


int main()
{
	double i = 1,a,b,c;
	while (i)
	{
		cout << "请输入三角形的三条边：";
		cin >> a >> b >> c;
		if (a + b > c && a + c > b && b + c > a)
		{
			i = 0;
			cout << "三角形的周长为：" << (a + b + c) << endl;
			cout << "三角形" << ((a == b || a == c || b == c) ? "是" : "不是") << "等腰三角形";
		}
		else
			cout << "输入错误" << endl;
	}	
	cin.get();
}