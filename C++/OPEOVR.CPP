#include<iostream.h>
#include<conio.h>
class Complex
{
 private:
 int a,b;
 public:
 void input()
 {
  cout<<"Enter two number: "<<endl;
  cin>>a>>b;
  }
  void show()
  {
    cout<<"sum of a="<<a<<"\nsum of b="<<b<<endl;
    }
    Complex operator +(Complex c)
    {
     Complex temp;
     temp.a=a+c.a;
     temp.b=b+c.b;
     return temp;
     }
    };
 void main()
 {
 clrscr();
 Complex c1,c2,c3;
 c1.input();
 c2.input();
 c3=c1+c2;
 c3.show();
 getch();
 }

