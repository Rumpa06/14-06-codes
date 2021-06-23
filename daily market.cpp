#include<iostream>
#include<iomanip>
using namespace std;
void income(float x,float y, float z,float t,float w,int m,int year)
{
double daily,monthly;
daily=x+y+z+t+w;
if (m==2)
	{
		monthly=daily*29;
	}
else if(m==4||m==6||m==9||m==11)
	{
		monthly=daily*30;
	}
else
	{
	   monthly=daily*31;
	}
cout<<fixed;
cout<<setprecision(6)<< daily<<" "<<monthly;
}

int main()
{
float x,y,z,t,w;
int m,year;
cin>>x>>y>>z>>t>>w>>m>>year;
if((m>0&&m<=12)&&y>x&&y>z&&y>t&&y>w&&x>0&&y>0&&z>0&&t>0&&w>0&&year>0)
{
income(x,y,z,t,w,m,year);
}
else
{
	cout<<"ERROR!!!";
}
return 0;
}
