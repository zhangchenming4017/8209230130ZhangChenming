#include<iostream>
using namespace std;

//a-z:97-122  A-Z:65-90

int main()
{
	char i;
	cout << "please enter a number: ";
	cin >> i;
	cout << endl;
	if (97 <= i && i <= 122)
		cout << char(i - 32);
	else if (65 <= i && i <= 90)
		cout << i + 1;
	else
		cout << "wrong";
	return 0;
}