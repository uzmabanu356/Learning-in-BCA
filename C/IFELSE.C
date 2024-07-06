#include<stdio.h>
#include<conio.h>
void main(){
int num;
clrscr();
printf("Enter One number=\n");
scanf("%d",&num);
if(num%2==0)
  {
  printf("Even Number");
  }
else
   {
   printf("Odd Number");
   }
getch();
}