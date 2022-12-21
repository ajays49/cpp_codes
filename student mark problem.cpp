#include <iostream>
#include <string>
using namespace std;

class student
{       
    private:             
        string name;        
        int marks;
        float total=0;
        float avg=0;
    public:
        int n;
        float mean();
};
float student::mean(void)
{
            cout<<"name:";
            cin>>name;
            cout<<"marks:\n";
            for(int i=0;i<n;i++)
            {
                cin>>marks;
                total+=marks;
            }
            avg=total/n;
            cout<<"avg:"<<avg;
}
int main()
{
  student Obj; 

  cout << "subjects:"; 
  cin>>Obj.n;
  Obj.mean();
  return 0;
}


