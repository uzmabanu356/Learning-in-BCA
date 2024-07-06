#include<iostream>
using namespace std;
class rem
{
    private:
    int a,b;
    public:
    void input()
    {
      cout<<"Enter two number :-"<<endl;
      cin>>a>>b;
    }
    void display()
    {
         cout<<"A Rem="<<a <<endl <<"B Rem="<<b<<endl;
    }
    rem operator % (rem c)
    {
        rem temp;
        temp.a=a%c.a;
        temp.b=b%c.b;
        return temp;
    }
};
int main()
{
    rem R1,R2,R3;
    R1.input();
    R2.input();
    R3=R1 % R2;
    R3.display();
    return 0;
}