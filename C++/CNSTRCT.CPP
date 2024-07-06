//cunstructor
#include<iostream.h>
#include<conio.h>
class Camplex
{
 private:
 int a,b;
 public:
 Complex()
 {
  cout<<"Good morning"<<endl;
  }
  Complex(int x,int y)
  {
   a=x;
   b=y;
   }
  };
  void main()
  {
   Complex c1;
   Complex c2(2,4);
   getch();
   }

