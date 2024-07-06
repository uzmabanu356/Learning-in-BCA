#include<iostream>
using namespace std;

class A
{
   private:
   int a,b;
   public:
   A(int x,int y)
   {
    a=x;
    b=y; 
    cout<<"a="<<a<<"b="<<b<<endl;
   }

   A(A &ref)
   {
       a=ref.a;
       b=ref.b;
       cout<<"a="<<a<<"b="<<b;
   }

};
int main()
{
   A c1(2,3);
   A c2(c1);
    return 0;
}