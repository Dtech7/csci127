//Name:  Neil Felix
//Date:  November 2017
// ask user for an original amount and interest rate, prints out the yearly interest until original amount is doubled
      
#include <iostream>
#include <iomanip> //for setprecision
using namespace std; 

void rate(float orAmt, int rt)
{
  float nwAmt = orAmt;
  cout << "Original Amount: " << orAmt << endl;
  cout << "Interest Rate: " << rt << endl; 
  for(int yrNm = 1; nwAmt < orAmt*2; yrNm++)
  {
    nwAmt+=nwAmt*rt/100;
    cout << "Year " << yrNm << ": " << setprecision(2) << fixed << nwAmt <<"\n";
  }
  
}


int main ()
{


  float amt;
  int rat;
  cout << "Please enter starting amount: ";
  cin >> amt;
  cout << "Please enter interest rate: ";
  cin >> rat;
  rate(amt, rat);

  return 0; 
}
