#include<iostream>
#include<cmath>

using namespace std;
double shuai( double n)
{
	double m = sqrt(n);
	return m;
}
int main()
{
	
	double a;
	cout << "输入一个待开平方的数： " << endl;
	cin >> a;
	 double b=shuai (a);
	 cout << "这个数的平方为：" << b << "" << endl;
	return 0;
}


