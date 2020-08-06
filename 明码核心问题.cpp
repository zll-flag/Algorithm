#include<iostream>
using namespace std;
//将有符号整数转换为八位二进制数
void toBinaryStr(int i,string &ans)
{
	if(i>=0){
		ans[0] = '-';
		for(int j = 0;j<7;++j){
			if(((i>>j) & 1) == 1)//二进制位上为1
			{
				ans[8-j-1] = '1' ; 
			} 
		}
	}	else{
		ans[0] = '1' ;
		for(int j = 0;j<7;++j){
			if((((i+128)>>j) & 1) == 1)//二进制位上为1
			{
				ans[8-j-1] = '1' ; 
			} 
		} 
	}
} 
int main(){
	int x,y;
	for(int i=0;i<10;++i)
	{
		for(int j=0;j<16;++j)
		{
			cin>>x;
			cin>>y;
			string xx ="--------"; 
			string yy ="--------";
			toBinaryStr(x,xx);
			toBinaryStr(y,yy);
			cout<<xx+yy<<endl;
		}	
	} 
}
