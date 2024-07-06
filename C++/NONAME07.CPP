#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,num;
clrscr();
printf("Enter any number :- ");
scanf("%d",&num);
while(i<=10)
 {
 j=i*num;
 printf("%d * %d =%d",num,i,j);
 i++;
 }
getch();
}