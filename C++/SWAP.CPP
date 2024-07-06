#include<stdio.h>
#include<conio.h>
void main()
{
 void sum(int *,int *);
 int num,a,b;
 clrscr();
 printf("Enter two number :- ");
 scanf("%d%d",&a,&b);
 sum(&a,&b);
 getch();
 }
 void sum(int *x,int *y)
 {
 int add;
 add=*x+*y;
 printf("sum is = %d",add);
 }