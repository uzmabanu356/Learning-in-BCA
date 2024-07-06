#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 try
 {
   int age=15;
   if(age>=18)
    {
      cout<<"Access granted - you are old enough"<<endl;
      }
    else
    {
     throw (age);
     }
   } ;
 catch (int num)
 {
  cout<<"Access denied-you must be at leat 18 year old.\n";
  cout<<"Age is"<<num;
  }
  getch();
  }


