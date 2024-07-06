#include<stdio.h>
#include<conio.h>
void main()
 {
 int a;
 clrscr();
 x:
 for(a=1;a<=10;a++)
 {
 printf("a=%d\n",a);
 }
 if(a<=10)
 {
 goto x;
 }
 getch();
 }
