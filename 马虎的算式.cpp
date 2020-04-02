#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int counter=0;
	for(int a=1;a<10;++a){ 
		for(int b=1;b<10;++b){ 
			if(b!=a)
				for(int c=1;c<10;++c){ 
					if(c!=a&&c!=b)
						for(int d=1;d<10;++d){ 
							if(d!=a&&d!=b&&d!=c)
								for(int e=1;e<10;++e){ 
									if(e!=a&&e!=b&&e!=c&&e!=d){ 
										if((a*10+b)*(c*100+d*10+e)==(a*100+d*10+b)*(c*10+e))
										++counter;
									} 
								}
							}
						}
					}
				} 
	cout<<counter;
	return 0; 
}
