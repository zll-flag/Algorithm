#include <iostream>
using namespace std;
const int N =1000;
int F1[N+1],F2[N+1],F3[N+1];
int main(){
	for(int i=0;i<=N;++i){
		F1[i]=i;
	}
	for(int i=1;i<=N;++i){
		int _min2 = INT_MAX;
		for(int j=1;j<=i;++j){
			int _max=1+max(F2[i-j],F1[j-1]);
			_min2=min(_min2,_max);
		}
		F2[i]=_min2;
	}
	for(int i=1;i<=N;++i){
		int _min3 = INT_MAX;
		for(int j=1;j<=i;++j){
			int _max=1+max(F3[i-j],F2[j-1]);
			_min3=min(_min3,_max);
		}
		F3[i]=_min3;
	}
	cout<<F3[1000]<<endl;
	return 0;
}
