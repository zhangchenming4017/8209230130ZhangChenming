#include<iostream>
using namespace std;

// 求圆锥的体积：要求键盘输入圆锥底的半径、锥高，使用标识符常量定义圆周率。

int main()
{
	const double pi = 3.14;
	double r, h;
	cout << "请输入圆锥底的半径、锥高：";
	cin >> r >> h;
	cout << "该圆锥的体积为：" << (pi * r * r) / 3;
	return 0;
}