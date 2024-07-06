// function overloading
#include<iostream.h>
#include<conio.h>
class Complex
{
  private:
  int a,b,c;
  public:
  void add()
  {
   int a=10;
   int b=20;
   cout<<"sum is ="<<a+b<<endl;
   }
   void add(int x,int y)
   {
    a=x;
    b=y;
    cout<<"sum is="<<a+b<<endl;
    }
    void add(int x,int y, int z)
    {
     a=x;
     b=y;
     c=z;
     cout<<"sum is="<<a+b+c<<endl;
     }
     };
     void main()
     {
      clrscr();
      Complex c1,c2,c3;
      c1.add();
      c2.add(30,20);
      c3.add(10,20,30);
      getch();
      }