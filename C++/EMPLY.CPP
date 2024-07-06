#include<conio.h>
#include<iostream.h>
struct Employee
 {
    char name[25];
    int emplyID;
    int salary;
   };
void main()
 {
   struct Employee e;
   clrscr();
 // Input Employee details
  cout<<"Enter Employee name :-";
  cin>>e.name;
  cout<<"Enter EmployeeID :-";
  cin>>e.emplyID;
  getch();
 }
