//Name:  Neil Felix
//Date:  November 2017
// ask user for an original amount, prints out the yearly interest of 10% until original amount is doubled
      
#include <iostream>
#include <iomanip> //for setprecision
using namespace std; 

int main ()
{


  float orAmt;
  int yr = 1;
  bool chk = true;
  cout << "Please enter starting amount: ";
  cin >> orAmt;
  float nwAmt = orAmt; 

  do
  {
    nwAmt+=(nwAmt*0.1);
    cout << "Year " << yr << "  " << setprecision(2) << fixed << nwAmt << endl;
    yr++;
    if(nwAmt > orAmt*2)
     {chk = false;}
  }while(chk);
  return 0; 
}
