#include<string>
#include<iostream>
#include"AV_to_BV.h"
#include"BV_to_AV.h"
using namespace std;
int main()
{
	int request;
	while (true)
	{
		cout << "AV转到BV还是BV转到AV（AV-->BV输入1，BV-->AV输入2）\n";
		cin >> request;
		if (request == 1)
		{
			long long InputAV;
			cout << "请输入AV号：\n";
			cin >> InputAV;
			AV_to_BV AVnumber;
			AVnumber.BVnum(InputAV);
		}
		else if (request == 2)
		{
			char BVnum[12];
			cout << "请输入BV号：\n";
			cin >> BVnum;
			BV_to_AV BVnumber;
			long long AV = BVnumber.AVNum(BVnum);
			cout << AV<<endl;
		}

	}	
	return 0;
}