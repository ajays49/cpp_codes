#include <iostream>

using namespace std;
class Department {

  public:
    Department()
    {
      cout << "AJAY SRIRAM" << endl;
    }
    
    ~Department() 
    {
      cout << "CSE AIR Department" << endl;
    }
};
class Employee
{

  public:
    Employee() 
    {
      cout << "21BRS1198 " << endl;
    }
    
    ~Employee()
    {
      cout << "VIT CHENNAI " << endl;
    }
};
int main(void) {
  Department d1;  
  Employee e2; 
  return 0;
} 
