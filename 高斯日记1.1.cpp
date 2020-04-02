#include <iostream>
using namespace std;
bool leap_year(int year)
{
	if((year%4==0&&year%100!=0)||(year%400==0))
		return true;
}
int main(int argc, char** argv) {
	int y = 1777 , m = 4 , d = 30 ;
	for(int i = 0 ; i < 8112 ; ++i)
	{
		d++;
		if( m == 12 && d == 32) 
		{
			y++;
			m=1;
			d=1;
			continue;
		}
		if((m==1 || m==3 || m==5||m==7|| m==8||m==10)&&d==32)
		{
			m++;
			d=1;
			continue;
		}
		if((m==4||m==6||m==9||m==11)&&d==31)
		{
			m++;
			d=1;
			continue;
		}
		if(m==2&&!leap_year(y)&&d==29)
		{
			m++;
			d=1;
			continue;
		}
		if(m==2&&leap_year(y)&&d==30)
		{
			m++;
			d=1;
			continue;
		}
	}
	cout<<y<<" "<<m<<" "<<d; 
	return 0;
}
