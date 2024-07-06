//Destrunctor
#include<iostream.h>
#include<conio.h>
class Complex
{
 private:
 int a,b;
 public:
 ~Complex()
 {
  cout<<"Destructor"<endl;
  }
  };
  void fun()
  {
   Complex obj;
   }
  void main(){
   clrscr();
   fun();
   getch();
   }


