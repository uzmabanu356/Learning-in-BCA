#include<iostream.h>
#include<conio.h>
class complex
{
 privat:
 int a,b;
 public;
 void setData(int x,int y)
 {
   a=x;
   b=y;
   }
   void showData()
   {
    cout<<"\na"<<a<<" " <<"b"<<b;
    }
    complex operator -(complex c)
    {
     complex temp;
     temp.a=a-c.a;
     temp.b=b-c.b;
     return temp;
     }
     void main()
     {
      clrscr();
      complex c1,c2,c3;
      c1.setData(5,6);
      c2.setData(3,4);
      c3=c1-c2 ;
      c3.showData();
      getch();

     }