#include<iostream>
using namespace std;

int main()
{
	float day = 0,sum = 0;
	int all=0;
	for (int num = 2; all <= 100; all+=num )
	{
		day++;
		sum += num * 0.8;
		num *= 2;
	}
	cout << "购买的苹果数不超过100的最大值时，求每天平均花：" << sum / day;
}