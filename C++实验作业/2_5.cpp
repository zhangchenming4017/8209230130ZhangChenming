#include<iostream>
using namespace std;

int main()
{
	int letter(0), space(0), number(0), others(0),chinese(0);
	cout << "����һ�����֣�";
	char ch;
	while (cin.get(ch))
	{
		if ((97 <= ch && ch <= 122) || (65 <= ch && ch <= 90))
			letter++;
		else if (48 <= ch && ch <= 57)
			number++;
		else if (ch == ' ')
			space++;
		else if (ch < 0)
			chinese++;
		else if (ch == '\n')
			break;
		else
			others++;

	}
	cout << "������" << number << "��" << endl;
	cout << "�ո���" << space << "��" << endl;
	cout << "��ĸ��" << letter << "��" << endl;
	cout << "�����ַ���" << chinese/2 << "��" << endl;
	cout << "�����ַ���" << others << "��" << endl;
}
