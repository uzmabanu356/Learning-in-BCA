#include<stdio.h>
#include<conio.h>
void main()
{
void aor(int,int);
int b,h,area;
clrscr();
printf("Enter base and height of triangle :- ");
scanf("%d%d",&b,&h);
aor(b,h);
getch();
}
void aor(int x ,int y)
{
 float area;
 area=0.5*x*y;
 printf("area of triangle:- %f",area);
}

