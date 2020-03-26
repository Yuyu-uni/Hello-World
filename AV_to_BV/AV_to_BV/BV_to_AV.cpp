#include "BV_to_AV.h"
#include<iostream>
#include<cstring>

int BV_to_AV::EachWordToNum(char eachword)
{
	int i;
	char WordInBV[]{ "123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz" };
	for ( i = 0; true; i++)
	{
		if (WordInBV[i] == eachword)
			break;
	 }
	int WholeNum[58]{ 13,12,46,31,43,18,40,28,5,54,20,15,8,39,57,45,36,38,51,42,49,52,53,7,4,9,50,10,44,34,6,25,1,26,29,56,3,24,0,47,27,22,41,16,11,37,2,35,21,17,33,30,48,23,55,32,14,19 };
	int NumPlaces = WholeNum[i];
	return NumPlaces;
}

long long BV_to_AV::NumArithmetic(char BVNum[12])
{
	long long NumArithmetic_1 = EachWordToNum(BVNum[2]) * pow(58, 6);//特殊运算后相加
	long long NumArithmetic_2 = EachWordToNum(BVNum[3]) * pow(58, 2);
	long long NumArithmetic_3 = EachWordToNum(BVNum[4]) * pow(58, 4);
	long long NumArithmetic_4 = EachWordToNum(BVNum[5]) * pow(58, 8);
	long long NumArithmetic_5 = EachWordToNum(BVNum[6]) * pow(58, 5);
	long long NumArithmetic_6 = EachWordToNum(BVNum[7]) * pow(58, 9);
	long long NumArithmetic_7 = EachWordToNum(BVNum[8]) * pow(58, 3);
	long long NumArithmetic_8 = EachWordToNum(BVNum[9]) * pow(58, 7);
	long long NumArithmetic_9 = EachWordToNum(BVNum[10]) * 58;
	long long NumArithmetic_10 = EachWordToNum(BVNum[11]);
	long long result = NumArithmetic_1 + NumArithmetic_2 + NumArithmetic_3 + NumArithmetic_4 + NumArithmetic_5 + NumArithmetic_6 + NumArithmetic_7 + NumArithmetic_8 + NumArithmetic_9 + NumArithmetic_10-100618342136696320;
	return result;
}

long long BV_to_AV::AVNum(char BVNum[12])
{
	long long AfterNumArithmetic = NumArithmetic(BVNum);
	long  long AVNumResult = AfterNumArithmetic ^ 177451812;
	return AVNumResult;
}
