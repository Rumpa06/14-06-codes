#include<iostream>
using namespace std;
void countNotes(int amount) {
   int notes[10] = { 2000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
   int Freq[10] = { 0 };
   for (int i = 0; i < 10; i++) {
      if (amount >= notes[i]) {
         Freq[i] = amount / notes[i];
         amount = amount - Freq[i] * notes[i];
      }
   }
   for (int i = 0; i < 10; i++) {
         cout << Freq[i] <<" ";
      }
   }
int main() {
   int amount;
   cin>>amount;
   if (amount>0 && amount<=25000)
    {
   countNotes(amount);
    }
    else
    {
    	cout<<"ERROR!!!"<<endl;
	}
}
