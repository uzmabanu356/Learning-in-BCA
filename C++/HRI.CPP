//Multiple inheritance
#include<iostream.h>
#include<conio.h>
class A1
{
   private:
   int a,b;
   public:
   void add()
   {
    int add;
    cout<<"\nEnter two number for addition : "<<endl;
    cin>>a>>b;
    add=a+b;
    cout<<"add="<<add;
    }
    };
 class A2
 {
   private:
   int a,b;
   public:
   void multi()
   {
    int multi;
    cout<<"\nEnter two number for multiply : "<<endl;
    cin>>a>>b;
    multi=a*b;
    cout<<"multiply="<<multi;
    }
    };
 class B:public A1,public A2
 {
   private:
   int a,b;
   public:
   void sub()
   {
    int sub;
    cout<<"\nEnter two number for subtraction : "<<endl;
    cin>>a>>b;
    sub=a-b;
    cout<<"sub="<<sub;
    }
    };
 void main()
 {
   clrscr();
   B b;
   b.add();
   b.multi();
   b.sub();
   getch();
   }




