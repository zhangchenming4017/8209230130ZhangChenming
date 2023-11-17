#include<iostream>
using namespace std;

void fun(double x)
{
	if (x > 0 && x < 1)
		cout << "y = " << 3 - 2 * x << endl;
	else if (x <= 5 && x >= 1)
		cout << "y = " << 2 / (4 * x) + 1 << endl;
	else if (x >= 5 && x < 10)
		cout << "y = " << x * x << endl;
	else
		cout << "错误，请输入一个大于0的数";
}

int main()
{
	fun(0.2);
	fun(1.5);
	fun(0);
}