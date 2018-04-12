//Name:  Neil Felix
//Date:  November 2017
//Info: Asks the user for age; negative number program loops

#include <iostream>
using namespace std;

int main () 
{
  int age1;
  cout << "Please enter age: ";
  cin >> age1;

  while(age1<0)
  {
    cout << "You entered a negative number. " << endl << "Please enter age: ";
    cin >> age1;
  }
  
  cout << "You entered your age as: " << age1 << endl;
}
