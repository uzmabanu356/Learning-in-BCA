#include<stdio.h>
#include<conio.h>
void main()
{
int add(int,int);
 int a,b,sum;
 clrscr();
 printf("Enter two number - " );
 scanf("%d%d",&a,&b);
 sum=add(a,b);
 printf("sum= %d",sum);
getch();
}
int add(int x,int y)
 {
 int c;
 c=x+y;
 return c;
 }