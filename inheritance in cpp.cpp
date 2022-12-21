


#include <iostream>
using namespace std;


class animal
{

   public:
    void hunt()
    {
        cout << "hunt other animals" << endl;
    }

    void sense() {
        cout << "only 5!" << endl;
    }
};

class Dog : public Animal
{
 
  public:
   void breed()
    {
        cout << " Bull dog" << endl;
    }
    void bark()
    {
        cout << "YES" << endl;
    }
    void tail()
    {
        cout << "no, short" << endl;
    }
    void loyal()
    {
        cout << "yes" << endl;
    }
    void teeth()
    {
        cout << "yes,sharp" << endl;
    }
};

int main()
{
    
    Dog dog1;

    dog1.breed();
    dog1.bark();
    dog1.tail();
    dog1.loyal();
    dog1.teeth();

    return 0;
}


