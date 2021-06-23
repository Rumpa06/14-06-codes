#include<iostream>
using namespace std;
int main()
{
	int k;
	cin>>k;
	int p=1;
	int q=1;
	int no[k];
	int c=0;
	if(k<10)
	{
	for(int i=0;i<k;i++)
	{
	   cin>>no[i];
	   if(no[i]<=0)
	   {
	   	c++;
	   }
	   if(i%2==0)
	   {
	   	p*=no[i];
	   }
	   else
	   {
	   	q*=no[i];
	   }
	if(p>=q&& c==0)
	{
		cout<<"Dominant";
	}
	else if(p<q&& c==0)
	{
		cout<<"Magical";
	}
	else
	{
		cout<<"Error";
	}
  }
}
else
{
	cout<<"Error";
}
}

