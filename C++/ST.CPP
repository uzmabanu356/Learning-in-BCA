#include<conio.h>
#include<iostream.h>
struct student
{
 int studentID;
 char studentname[30];
 int studentrollno;
 };
 student stu();
 void main()
 {
 clrscr();
 student a1;
 a1=stu();
 getch();
 }
 student stu ()
 {
 student x;
  cout<<"Enter student ID, name,and roll number:-\n";
 cin>>x.studentID>>x.studentname>>x.studentrollno;
 cout<<"student nature is good";
 return (x);
 }

