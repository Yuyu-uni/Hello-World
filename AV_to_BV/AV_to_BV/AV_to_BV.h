#pragma once
class AV_to_BV
{
public:
	double ToBinary(long long a);//十进制转为二进制
	double ToDecimalism(long long a);//二进制转为十进制
	char EachWordExchange(long long a);//base58
	void BVnum(long long InputAV);//进行转换
};

