#include<stdio.h>
#include<conio.h>
void main()
{
 int marks,grade;
 clrscr();
 printf("Enter your marks :- ");
 scanf("%d",&marks);
 if(marks>80)
  printf("Grade - A");
  else if(marks>70)
  printf("Grade - B");
  else if(marks>60)
  printf("Grade - C");
  else if(marks>50)
  printf("Grade - D");
  else
  printf("Fail");
 getch();
 }