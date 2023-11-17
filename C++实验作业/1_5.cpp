#include<iostream>
using namespace std;
//编程，输入华氏温度，将其转换为摄氏温度后输出（保留两位小数）。
int main()
{
	double F, C;
	cout << "请输入一个华氏温度：";
	cin >> F;
	double temp = (F - 32) / 1.8;
	cout <<"华氏温度"<<F<<"转化成摄氏度为：" << (int(temp * 100)) / 100.0;
	return 0;
}