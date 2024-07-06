#include<stdio.h>
#include<conio.h>
void main(){
int a,i,b;
clrscr();
printf("Enter any number");
scanf("%d",a);
for(i=1;i<=10;i++)
{
b=a*i;
printf("%d*%d=%d\n",a,b,i);
}
getch();
}