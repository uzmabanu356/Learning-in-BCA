#include<stdio.h>
#include<conio.h>
void main()
{
int a=1;
clrscr();
X:
if(a<=10)
{
 printf("a=%d\n",a);
 a++;
 goto X;
 }
getch();
}

