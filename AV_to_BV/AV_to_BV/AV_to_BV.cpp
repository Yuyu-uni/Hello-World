#include "AV_to_BV.h"
#include<string>
#include<cstring>
#include<iostream>
using namespace std;


double AV_to_BV::ToBinary(long long a)
{
	 double Result=0;
	long long eachNum = 0;
	 double i = 1;
	while (a != 0)
	{
		eachNum= a % 2;
		a /= 2;
		Result = Result+(double)(eachNum * i);
		i =i* 10;
	} ;
	return Result;
}//十进制转为二进制

double AV_to_BV::ToDecimalism(long long a)
{
	long long i = 0, Eachnumber = 0,result=0;
	while (a!=0)
	{
		Eachnumber = a % 10;
		a /= 10;
		result += Eachnumber * pow(2, i);
		i++;
	}
	return 0;
}//二进制转为十进制

char AV_to_BV::EachWordExchange(long long a)
{
	char base58[]{ "fZodR9XQDSUm21yCkr6zBqiveYah8bt4xsWpHnJE7jL5VG3guMTKNPAwcF" };
	char b = base58[a];
	return b;
}//base58

void AV_to_BV::BVnum(long long InputAV)
{
	long long AfterXor_Decimalism = InputAV ^ 177451812;//异或运算后的十进制值
	long long CirculationNum = AfterXor_Decimalism + 100618342136696320;
	char BVnum[10];//根据base58转换前的字符
	long long EachWord;
	for (long long i = 0; i < 10; i++)
	{
		//CirculationNum整除58的i次方后去掉余数的值再取模58
		long long square = pow(58, i);
		long long BeforeMod = CirculationNum / square;//取模之前
		EachWord = BeforeMod % 58;
		BVnum[i] = EachWordExchange(EachWord);//返回根据base58进行转换后的值,未进行排序
	}
	char TrueBVnum[11]{ BVnum[6],BVnum[2], BVnum[4], BVnum[8], BVnum[5] ,BVnum[9], BVnum[3], BVnum[7], BVnum[1],BVnum[0],'\0' };
	//                                0   1             2                 3               4                 5               6             7            8             9                10            11                          进行排序
	cout << "BV" << TrueBVnum<<endl;
}







