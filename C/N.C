#include<stdio.h>
#include<conio.h>
void main(){
int year;
clrscr();
printf("Enter year");
scanf("%d",&year);
if(year%4==0){
printf("it is leap year");
}
else if(year%400==0)
{
printf("it is not a leap year");
}
else{
printf("hello");
}
getch();
}
