#include<iostream>
using namespace std;

int nmax(int x, int y)
{
	return x > y ? x : y;
}

int nmin(int x, int y)
{
	return x > y ? y : x;
}

int gcd(int x, int y)
{
	if (nmax(x, y) % nmin(x, y) == 0)
		return nmin(x, y);
	else
		return gcd(nmin(x, y), nmax(x, y) % nmin(x, y));
}
int lcm(int x, int y)
{
	return x * y / gcd(x, y);
}

int main()
{
	cout << "68和24的最大公因数为：" << gcd(24, 68) << endl;
	cout << "68和24的最小公倍数为：" << lcm(24, 68) << endl;
}