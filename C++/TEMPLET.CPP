//t\\emplate (Swapping)
#include<iostream.h>
#include<conio.h>
template <class t>
int swapnumber(t &x,t &y)
{
 t z;
 z=x;
 x=y;
 y=z;
 return 0;
 }
 void main()
 {
  clrscr();
  int a,b;
  a=10,b=20;
  cout<<"Before swapping \nA="<<a<<" \nB=" <<b<<endl;
  swapnumber(a,b);
  cout<<"After swapping"<<endl;
  cout<<"A="<<a<<endl;
  cout<<"B="<<b<<endl;
  getch();
  }