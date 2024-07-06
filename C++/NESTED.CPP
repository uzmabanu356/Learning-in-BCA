#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter three number:-");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
 {
 if(a>c)
 {
 printf("A is maximum");
 }
 else
 {
 printf("C is maximum");
 }
 }
 else
 {
 if(b>c)
 {
 printf("B is maximum");
 }
 else
 {
 printf("C is maximum");
 }
 }
 getch();
}
