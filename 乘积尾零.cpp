#include<iostream>
using namespace std;
int count_5(int x){
	int c=0;
	while(x%5==0){
		++c;
		x/=5;
	}
	return c;
}
int count_2(int x){
	int c=0;
	while(x%2==0){
		++c;
		x/=2;
	}
	return c;
}
int main(){
	int x,c_2=0,c_5=0;
	while(cin>>x){
		c_2+=count_2(x);
		c_5+=count_5(x);
	}
	cout<<min(c_2,c_5)<<endl;
}
