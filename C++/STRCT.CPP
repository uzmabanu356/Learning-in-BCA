#include<conio.h>
#include<iostream.h>
struct student
{
   char name[20];
   int roll_number;
   float marks[3];
};
void main()
{
  struct student b;
  int i,sum,average;
   clrscr();
   cout<<"Enter student details \n";
   cout<<"Enter student name:-";
   cin>>b.name;
   cout<<"Enter student rollnumber:-";
   cin>>b.roll_number;
   cout<<"Enter student marks:-";
   for(i=1;i<=3;i++)
     {
      sum=sum+i;
      cin>>b.marks[i];
      }
//calculate average
  float totalmarks=0;
  for( i=0;i<=3;++i)
  {
  totalmarks +=b.marks[i];
  }
 float averagemarks =totalmarks/3;
 cout<<"\n averagemarks:"<<averagemarks<<"\n";
getch();
  }
