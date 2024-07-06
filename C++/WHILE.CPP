#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k=0;
 clrscr();
 printf("enter any number :- ");
 scanf("%d",&i);
 while(i!=0)
  {
  j=i%10;
  k=k+j;
  i=i/10;
  }
  printf("sum of digits = %d",k);
 getch();
 }

