//Multilevel inheritance
#include<iostream.h>
#include<conio.h>
class A
{
 private:
  int a,b;
  public:
  void input(int x, int y)
  {
   a=x;
   b=y;
   cout<<"a="<<a<<"\nb="<<b<<endl;
   }
   };
class B : public A
 {
   private:
   int m,n;
   public:
   void sum(int M,int N)
   {
   m=M;
   n=N;
   cout<<"m="<<m<<"\nn="<<n<<endl;
    cout<<"sum is= " <<m+n<<endl;
    }
   };
class C : public B
 {
   private:
   int m,n;
   public:
   void sub(int M,int N)
   {
    m=M;
    n=N;
     cout<<"m="<<m<<"\nn="<<n<<endl;
    cout<<"sub is= " <<m+n<<endl;
    }
   };
void main()
{
 clrscr();
 B b;
 C c;
 b.input(2,3);
 b.sum(2,4);
 c.input(4,5);
 c.sub(3,6);
 getch();
 }