#include<iostream>
using namespace std;

int main()
{
	char op;
	int a, b;
	cout << "������һ���������+ - * / %����";
	cin >> op;
	cout << "��ֱ������һ���͵ڶ�����������";
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
		else cout << "��������Ϊ0" << endl;
	case'%':
		if (b != 0)
		{
			cout << a % b << endl;
			break;
		}
		else 
		{ 
			cout << "��������Ϊ0" << endl; 
			break;
		}
	default:
		cout << "���������" << endl;
		break;
	}
}