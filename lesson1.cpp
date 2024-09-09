#include <iostream>
using namespace std;

class Teacher {
private:
  double salary;
public:
  // Properties/Attributes
  string name;
  string subject;
  string dept;

  // Setter
  void SetSalary(double s){
    salary = s;
  }
  // Getter
  double GetSalary(){
    return salary;
  }


  // Methods / Member Functions
  void ChangeDept(string newDept){
    dept = newDept;
  }
};

/*
Access Modifiers
private: data & methods accessible inside class
public: data & methods accessible to everyone
protected: data & methods accessible inside class & to its
derived class
*/

int main() { 
  Teacher T1;
  T1.name = "Rahul Seth";
  T1.subject = "Python";
  T1.dept = "Computer Science";
  cout<<T1.dept<<endl;
}