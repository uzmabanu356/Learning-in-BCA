#include<stdio.h>
#include<conio.h>
void main()
{
int no,b=1;
clrscr();
printf("enter any number :");
scanf("%d",&no);
while(no>=1)
{
 b=b*no;
 no--;
 }
 printf("factorial=%d" ,b);
 getch();
 }
