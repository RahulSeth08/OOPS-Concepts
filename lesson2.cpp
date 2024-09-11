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
  Account(){
    cout<<"Constructor Called"<<endl;
  }
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
  Account A1;
  A1.AccID = "11001";
  A1.UserName = "Rahul";
  A1.setter(25000);
  cout<<A1.getter()<<endl;
  return 0;
}
