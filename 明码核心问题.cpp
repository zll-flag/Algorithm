#include<iostream>
using namespace std;
//���з�������ת��Ϊ��λ��������
void toBinaryStr(int i,string &ans)
{
	if(i>=0){
		ans[0] = '-';
		for(int j = 0;j<7;++j){
			if(((i>>j) & 1) == 1)//������λ��Ϊ1
			{
				ans[8-j-1] = '1' ; 
			} 
		}
	}	else{
		ans[0] = '1' ;
		for(int j = 0;j<7;++j){
			if((((i+128)>>j) & 1) == 1)//������λ��Ϊ1
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
