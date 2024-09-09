#include <iostream>
using namespace std;

class Teacher {
  // Properties/Attributes
  string name;
  string subject;
  string dept;
  double salary;


  // Methods
  void ChangeDept(string newDept){
    dept = newDept;
  }
};

int main() { 
  cout << "Hello World!" << endl; 
}