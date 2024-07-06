#include<iostream.h>
#include<conio.h>
class A
{
 private:
 int a,b,add;
 public:
 void input1()
 {
  cout<<"enter two number:- "<<endl;
  cin>>a>>b;
  }
  void sum()
  {
   add=a+b;
   cout<<"addition is :-"<<add<<endl;
   }
  };
  class B1 : public A
{
 private:
 int a,b,sub;
 public:
 void input2()
 {
  cout<<"enter two number:- "<<endl;
  cin>>a>>b;
  }
  void subtract()
  {
   sub=a-b;
   cout<<"subtraction is :-"<<sub<<endl;
   }
  };
class B2 : public A
{
 private:
 int a,b,multi;
 public:
 void input3()
 {
  cout<<"enter two number:- "<<endl;
  cin>>a>>b;
  }
  void multiply()
  {
   multi=a*b;
   cout<<"multiplication is :-"<<multi<<endl;
   }
  };
void main()
{
 clrscr();
 B1 obj1;
 B2 obj2;
 obj2.input1();
 obj2.sum();
 obj1.input2();
 obj1.subtract();
 obj2.input3();
 obj2.multiply();
 getch();
 }