#include<iostream>
using namespace std;
//��̣����뻪���¶ȣ�����ת��Ϊ�����¶Ⱥ������������λС������
int main()
{
	double F, C;
	cout << "������һ�������¶ȣ�";
	cin >> F;
	double temp = (F - 32) / 1.8;
	cout <<"�����¶�"<<F<<"ת�������϶�Ϊ��" << (int(temp * 100)) / 100.0;
	return 0;
}