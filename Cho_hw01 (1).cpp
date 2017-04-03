//Wonyik Cho
//CPSC-121-13
//This is a program that transfer the value of the change in coins.

#include<iostream>
using namespace std;

int main ()
{
  int change = 0, quater = 0 , dime = 0, nickel = 0, penny = 0;

  cout << "Please enter the a given amount of change in cents: ";
  cin >> change;

  while (change > 0 || change < 100)
  { 
    quater = change / 25;
    change = change % 25;
    dime = change / 10;
    change = change % 10;
    nickel = change / 5;
    penny = change % 5;

    cout << "You get: "<<endl;
    break;
  }
    
    while (quater > 0)
    {
      cout << quater << " quaters" << endl;
      break;
    }   
    while (dime > 0)
    {
      cout << dime << " dimes" << endl;
      break;
    }
    while (nickel > 0)
    {
      cout << nickel << " nickels" << endl;
      break;
    }
    while (penny > 0)
    {
      cout << "and " << penny <<" pennies." <<endl;
      break;
    }
    
    

   return 0;
     
}
