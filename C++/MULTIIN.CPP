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
  class A1
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
class B : public A,public A1
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
 B obj;
 obj.input1();
 obj.sum();
 obj.input2();
 obj.subtract();
 obj.input3();
 obj.multiply();
 getch();
 }