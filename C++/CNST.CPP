//CONSTUCTOR(parameterized,default)
#include<iostream.h>
#include<conio.h>
class Complex
{
 private:
 int a,b;
 public:
 Complex()
 {
  cout<<"Good morning";
  }
  Complex(int x,int y)
  {
    a=x;
    b=y;
    cout<<"\na="<<a<<"\nb="<<b<<endl;
    }
    Complex(Complex &c)
    {
     a=c.a;
     b=c.b;
     cout<<"------COPY CONSTRUCTOR-------"<<endl;
     cout<<"\na="<<a<<"\nb="<<b;
     }
  };
  void main()
  {
   clrscr();
   Complex c1;
   Complex c2(1,2);
   Complex c3=c2;
   getch();
   }