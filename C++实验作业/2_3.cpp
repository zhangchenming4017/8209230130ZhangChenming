#include<iostream>
using namespace std;

// ���������ε������ߣ����ܳ������жϸ��������Ƿ�Ϊ���������Σ���ʾ��Ҫ�����Ƿ���Թ��������Σ���


int main()
{
	double i = 1,a,b,c;
	while (i)
	{
		cout << "�����������ε������ߣ�";
		cin >> a >> b >> c;
		if (a + b > c && a + c > b && b + c > a)
		{
			i = 0;
			cout << "�����ε��ܳ�Ϊ��" << (a + b + c) << endl;
			cout << "������" << ((a == b || a == c || b == c) ? "��" : "����") << "����������";
		}
		else
			cout << "�������" << endl;
	}	
	cin.get();
}