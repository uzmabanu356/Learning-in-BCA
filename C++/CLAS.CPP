#include<conio.h>
#include<iostream.h>
class myClass
{
 private:
 int a,b,sum,sub;
 public:
 void input()
 {
 cout<<"Enter number:-\n" ;
 cin>>a>>b;
 }
  void calculater()
  {
  int multi;
  sum=a+b;
  cout<<"sum="<<sum;
  sub=a-b;
  cout<<"\nsub="<<sub;
  multi=a*b;
  cout<<"\nmulti="<<multi;
  float devid;
  devid=a/b;
  cout<<"\ndevid="<<devid;
 }
 };
 void main()
 {
 myClass obj;
 clrscr();
 obj.input();
 obj.calculater();
 getch();
 }

