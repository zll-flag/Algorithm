#include <iostream>
#include <bitset>
using namespace std;
string toBinary(int x){//xΪ�з����������ú�������ת����Ķ������� 
	bitset<8> t(x);//��8��Ϊת����Ķ�������λ���ɱ仯 
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

