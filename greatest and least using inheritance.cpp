
#include <iostream>
using namespace std;
class c11
{
    int a;
};
class c12:public c11
{
    int b;
};
class c13:public c12
{
    int c;
    friend void avg(int a,int b,int c);
};
void avg(int a,int b,int c)
{
    if(a>b&&a>c)
    {
        cout<<""<<a<<"is greatest";
    }
    else if(b>a&&b>c)
    {
        cout<<""<<b<<"is greatest";
    }
    else if(c>a&&c>b)
    {
        cout<<""<<c<<"is greatest";
    }
}
int main()
{
    int a,b,c;
    c13 s;
    cin>>a>>b>>c;
    avg(a,b,c);
}
    
