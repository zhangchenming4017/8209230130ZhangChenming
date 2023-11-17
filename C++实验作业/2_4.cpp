#include<iostream>
using namespace std;

int main()
{
	char op;
	int a, b;
	cout << "请输入一个运算符（+ - * / %）：";
	cin >> op;
	cout << "请分别输入第一个和第二个操作数：";
	cin >> a >> b;
	switch (op)
	{
	case'+':
		cout << a + b << endl;
		break;
	case'-':
		cout << a - b << endl;
	case'*':
		cout << a * b << endl;
	case'/':
		if (b != 0)cout << a / b << endl;
		else cout << "除数不能为0" << endl;
	case'%':
		if (b != 0)
		{
			cout << a % b << endl;
			break;
		}
		else 
		{ 
			cout << "除数不能为0" << endl; 
			break;
		}
	default:
		cout << "运算符错误" << endl;
		break;
	}
}