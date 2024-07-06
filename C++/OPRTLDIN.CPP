#include<iostream.h>
#include<conio.h>
class Complex
{
 private:
  int a,b;
  public:
  void input()
  {
   cout<<"enter two number:- "<<endl;
   cin>>a>>b;
   }
   void show()
   {
    cout<<"sum is:-\na="<<a<<"\nb="<<b;
    }
   Complex operator+(Complex c)
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
