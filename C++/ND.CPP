#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int *p=new int ;
  cout<<"Enter any number:"<<endl;
  cin>>*p;
  cout<<"value is :"<<*p<<endl;
  delete p;
  getch();
  }
