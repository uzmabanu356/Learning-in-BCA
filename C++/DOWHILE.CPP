#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y=0,z;
 clrscr();
 printf("Enter any number :- ");
 scanf("%d",&x);
 while(x!=0)
 {
 z=x%10;
 y=y*10+z;
 x=x/10;
 }
 printf("Reverse of digit : %d",y);
getch();
}