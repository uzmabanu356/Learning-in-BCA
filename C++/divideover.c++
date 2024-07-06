#include<iostream>
using namespace std;
class divide
{
   private:
   int a,b;
   public:
   void input()
   {
    cout<<"enter two number:- "<<endl;
    cin>>a>>b;
   }
   void display()
   {
    cout<<"a divide="<<a<<endl<<"b divide="<<b;
   }
   divide operator /(divide c)
   {
    divide temp;
    temp.a=a/c.a;
    temp.b=b/c.b;
    return temp;
   }
};
int main()
{
    divide d1,d2,d3;
    d1.input();
    d2.input();
    d3=d1/d2;
    d3.display();
    return 0;
}