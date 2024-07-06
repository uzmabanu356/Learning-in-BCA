#include<iostream>
using namespace std;
class multi
{
    private:
    int a,b;
    public:
    void input()
    {
        cout<<"Enter two number:-"<<endl;
        cin>>a>>b;
    }
     void display()
    {
        cout<<"a="<<a<<endl<<"b="<<b;
    }
     multi operator *(multi c)
     {
        multi temp;
        temp.a=a*c.a;
        temp.b=b*c.b;
       return temp;

     }
}; 

int main()
{
    multi m1,m2,m3;
    m1.input();
    m2.input();
    m3=m1*m2;
    m3.display();
    return 0;
}