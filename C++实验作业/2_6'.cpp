#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "������������������";
	cin >> a >> b;
	int first = (a > b ? a : b), second = (a > b ? b : a);
	bool object = true;
	int remainder = first % second;
	if (remainder == 0)
		cout << "�������������Լ��Ϊ��" << second;
	else
	{
		while (object)
		{
			int a = remainder;
			remainder = second% a;
			if (remainder == 0)
			{
				object = false;
				cout << "�������������Լ��Ϊ��" << a;
			}
			second = a;
		}
	}
}