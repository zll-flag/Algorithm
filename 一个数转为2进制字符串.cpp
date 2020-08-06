#include <iostream>
#include <bitset>
using namespace std;
string toBinary(int x){//x为有符号整数，该函数返回转换后的二进制数 
	bitset<8> t(x);//“8”为转换后的二进制数位，可变化 
	return t.to_string();
}
int main()
{
	int x;
	cin>>x;
	string rst;
	rst=toBinary(x);
	cout<<rst;
	return 0;
//	bitset<8> t(-11);
//	cout<<"0x"<<hex<<t.to_ulong()<<"="<<t.to_string()<<"b"<<endl;
}

