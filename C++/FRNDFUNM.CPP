#include<iostream.h>
#include<conio.h>
class B;
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
   friend void fun(Complex,B);
   };
   class B
   {
     private:
     int x,y;
     public:
     void setDat()
     {
      cout<<"Enter two number :"<<endl;
      cin>>x>>y;
      }
      friend void sub(Complex,B);
      };
   //Define friend fuction
   void fun(Complex c,B b)
   {
    cout<<"\nsum is= " <<c.a+c.b;
    cout<<"\nsub is= "<<b.x-b.y;
    }
    void main()
    {
     Complex c1,c2,c3;
     B b1,b2;
     clrscr();
     c1.input();
     c1.show();
     b1.setData();
     fun(c1);
     fun(b1);
     getch();
     }

