#include<iostream.h>
#include<conio.h>
class A
{
 public:
 int a,b;
 public:
 void input()
 {
  cout<<"Enter two number:-"<<endl;
  cin>>a>>b;
  }
  };
  class B : public A
  {
   public:
   void add()
   {
    int c;
    c=a+b;
    cout<<"sum is :-"<<c<<endl;
    }
    };
    class C : public B
    {
      public:
      void sub()
      {
	int s;
	s=a-b;
	cout<<"subtraction is :-"<<s<<endl;
	}
      };
   void main()
   {
    clrscr();
    C obj1;
    obj1.input();
    obj1.add();
    obj1.sub();
    getch();
    }