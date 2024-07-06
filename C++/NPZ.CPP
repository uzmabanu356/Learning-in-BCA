#include<conio.h>
#include<iostream.h>
void main()
{
  int num;
  clrscr();
  cout<<"Enter a number:- ";
  cin>>"%d\n",&num;
  if(num>=1)
  {
    cout<<" number is positive"<<endl;
    }
   else if(num<=-1)
   {
    cout<<"number is negetive"<<endl;
    }
    else if(num==0)
    {
     cout<<" ZERO"<<endl;
     }
     else
     {
      cout<<"hello"<<endl;
      }
   getch();
   }