#include<iostream.h>
#include<conio.h>
class Complex
{
 private:
 int a,b;
 public:
 void input()
 {
  cout<<"Enter two number: " <<endl;
  cin>>a>>b;
   }
   void show()
   {
   cout<<"a="<<a<<"\nb="<<b;
   }
   //Declare friend function
   friend void fun(Complex);
   };
   //Define friend fuction
   void fun(Complex c)
   {
    cout<<"\nsum is= " <<c.a+c.b;
    }
    void main()
    {
     Complex c1,c2,c3;
     clrscr();
     c1.input();
    c1.show();
     fun(c1);
     getch();
     }

