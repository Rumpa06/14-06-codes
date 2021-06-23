#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int age[n];
int temp=0;
int count=0;
if(n>=0)
{
for(int i=0;i<n;i++)
{
cin>>age[i];
if(age[i]<=0)
{
	count++;
}
if(age[i]>0 && count==0)
{
for(int j=1;j<=4;j++)
{
  if(age[i]>=52)
	{
	  temp+=4;	
	}
    age[i]++;
}
}
}
cout<<temp;
}
else
{
	cout<<"ERROR!!!";
}
}
