//Name:  Neil Felix
//Date:  November 2017
//Asks user for integer, prints out a triangle using that int as the length and height

#include <iostream>
using namespace std;

int main () 
{
  int orlen = 1; //controls the number of *
  int nwlen;
  cout << "Enter a number: ";
  cin >> nwlen;
  
  for(int i=0; i<nwlen; i++) //Controls the height
  {
      for(int j=0; j<orlen; j++) //Controls the width
      {
        cout << "*";

      }
      cout << endl;
      orlen+=1; //increments orlen to increase the number os *
  }

  return 0; 
}
