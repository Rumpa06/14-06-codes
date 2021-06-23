#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
int Y,YY,YYY;  
int M,MM,MMM; 
int D,DD,DDD; 
int days,weeks;
int i = 1, j, count;
int sum1,sum2=0;

cout << "Enter the current year: ";
cin >> YYY;
cout << "Enter the current month: ";
cin >> MMM; 
cout << "Enter the current day: ";
cin >> DDD; 
cout << "Please enter your DOB." << endl;
cout << "Year: ";
cin >> YY; 
cout << "Month: ";
cin >> MM; 
cout << "Day: ";
cin >> DD; 
Y = abs(YYY - YY); 
M = abs(MMM - MM); 
D = abs(DDD - DD); 
days= Y*365+M*30+D;
weeks=days/7;
cout<<"Total weeks"<<weeks<<endl;
while (i <=weeks)
   	{
   		count = 0;
    	if(weeks % i == 0)
      	{
      		j = 1;
      		while(j <= i)
      		{
      			if(i % j == 0)
      			{
      				count++;
				}
				j++;
			}
			if(count == 2)
			{
				sum1+=i;
				cout<<"Sum of prime factor"<<sum1<<endl;
			} 
			else
			{
				cout<<"Sum of non prime factor"<<sum2<<endl;
				sum2+=i;
			}
      	}
    	i++;
   	}
if(sum1>sum2)
{
	cout<<"GRANTED";
}
else
{
 cout<<"NOT GRANTED";	
}		
	

return 0;
}
