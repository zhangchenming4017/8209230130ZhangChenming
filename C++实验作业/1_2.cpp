#include<iostream>
using namespace std;

// ��Բ׶�������Ҫ���������Բ׶�׵İ뾶��׶�ߣ�ʹ�ñ�ʶ����������Բ���ʡ�

int main()
{
	const double pi = 3.14;
	double r, h;
	cout << "������Բ׶�׵İ뾶��׶�ߣ�";
	cin >> r >> h;
	cout << "��Բ׶�����Ϊ��" << (pi * r * r) / 3;
	return 0;
}