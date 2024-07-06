#include<stdio.h>
#include<conio.h>
void main()
{
 int num,i=1;
 clrscr();
 printf("Enter any number :- ");
 scanf("%d",&num);
 while(num>=1)
 {
  i=num*i;
  num--;

}
printf("sum digit=%d",i);
 getch();
 }


