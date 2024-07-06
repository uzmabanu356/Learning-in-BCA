#include<iostream>
using namespace std;

class A
{  
    private:
   int a,b,c;
   public:
   void input()
   { 
       cout<<"Enter two number :-"<<endl;
       cin >>a>>b;
   }
   void sum()
   {
    c=a+b;
    cout<<"sum is="<<c;
   }
};