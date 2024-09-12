#include<bits/stdc++.h>
using namespace std;
// Encapsulation
// Encapsulation is wrapping up of data & member functions in a single unit called class.

// Mainly Used for Data Hiding with the help of private acess modifier.

class Account{
private:    // Data Hiding
  double balance;
  string password;

public:
  void setter(double b){
    balance = b;
  }
  double getter(){
    return balance;
  }
  // non-paramatized 
  Account(){    // Constructor
    branch = "Mayur Vihar Ph-1";  // Set default value when we initalize object
  }
  // Constructor Overloading:
  // We can have 
  // paramatized
  Account(string br, string A, string User){
    branch = br;
    AccID = A;
    UserName = User;
  }
  string branch;
  string AccID;
  string UserName;
  
};
/*
Constructor
Special method invoked automatically at time of object creation. Used for Initialisation.
• Same name as class
• Constructor doesn't have a return type
• Only called once (automatically), at object creation
• Memory allocation happens when constructor is called
*/
int main(){
  Account A1("Mayur Vihar Ph-1", "1101", "Rahul"); // Parameteized Constructor
  return 0;
}
