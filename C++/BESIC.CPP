#include<iostream.h>
#include<conio.h>
class person
{
  public:
  char name[30];
  int age;
  void display()
  {
  cout<<"\na"<<name<<"age"<<age;
  }
  };
  void main ()
  {
    person a1;
   clrscr();
   cout<<"Enter name:- "<<endl;
   cin>>"a1.name";
   cout<<"Enter age:- "<<endl;
   cin>>"a1.age";
   a1.display();
   getch();
   }
