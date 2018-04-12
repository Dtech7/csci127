//Name:  Neil Felix
//Date:  November 2017
//Info: Asks the user for the hour of the day (in 24 hour time), and prints appropriate gretting

#include <iostream>
using namespace std;

int main () 
{
  int hr;
  cout << "Enter hour(24hr time): ";
  cin >> hr;
  if(hr < 12)
   {
     cout << "Good Morning \n";
   }
   else if(hr >= 12 && hr < 17)
   {
     cout << "Good Afternoon \n";
   }
   else
   {
      cout << "Good Evening \n";
   }
  
  return 0; 
}
