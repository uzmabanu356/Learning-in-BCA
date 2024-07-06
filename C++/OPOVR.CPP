//Logical not
#include<iostream.h>
#include<conio.h>
class Complex
{
 private:
 int a;
 public:
 void input(int x)
 {
   a=x;
   }
   void show()
   {
    cout<<a<<endl;
    }
  void operator !(void)
 {
    a=!a;
  }
  };
  void main()
  {
   clrscr();
   Complex c1;
   c1.input(1);
   cout<<"Befor calling operator overloading value is :"<<endl;
   c1.show();
   cout<<endl;
   !c1;
   cout<<"After calling operator overloading value is:"<<endl;
   c1.show();
   getch();
   }
