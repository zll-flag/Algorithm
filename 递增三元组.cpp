#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N;
	cin>>N;
	int a[N],b[N],c[N]; 
	for(int i = 0;i < N;++i){
		cin>>a[i];
	}
	for(int i = 0;i < N;++i){
		cin>>b[i];
	}
	for(int i = 0;i < N;++i){
		cin>>c[i];
	} 
	sort(a,a+N);
	sort(b,b+N);
	sort(c,c+N);
	int p=0,q=0,sum=0;
	for(int j=0;j<N;++j){
		while(a[p]<b[j]&&p<N) ++p;
		while(c[q]>=b[j]&&q<N) ++q;
		sum+=p*q;
	}
	cout<<sum<<endl;
	return 0;
} 
