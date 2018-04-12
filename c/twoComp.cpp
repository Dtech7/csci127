//Name:  Neil Felix
//Date:  November 2017
//Info: Asks the user for whole number; then prints out the number in two complement notation

#include <iostream>
using namespace std;

int main () 
{
  int n, x;
  int b = 16;
  cout << "Please enter a whole number between -31 and 31: ";
  cin >> n;
  
  if(n < 0)
  {
    cout << 1;
    x = n + 32;
  }
  else
  {
    cout << 0;
    x = n;
  }

  while(b > 0.5)
  {
    if(x >= b)
    {
      cout << 1;
    }
    else
    {
      cout << 0;
    }
    
    x = x % b;
    b = b/2;
  }
  
  cout << endl;
  return 0;
}
