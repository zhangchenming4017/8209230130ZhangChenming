#include<iostream>
using namespace std;

int main()
{
	int letter(0), space(0), number(0), others(0),chinese(0);
	cout << "输入一段文字：";
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
	cout << "数字有" << number << "个" << endl;
	cout << "空格有" << space << "个" << endl;
	cout << "字母有" << letter << "个" << endl;
	cout << "中文字符有" << chinese/2 << "个" << endl;
	cout << "其他字符有" << others << "个" << endl;
}
