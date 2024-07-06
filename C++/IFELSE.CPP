#include<stdio.h>
#include<conio.h>
void main()
{
int salery,bonus,netsal;
clrscr();
printf("enter your salery:-");
scanf("%d",&salery);
if(salery>=10000)
 {
 bonus=salery/100*35;
 }
 else
 {
 bonus=salery/100*20;
 }
 netsal=salery+bonus;
 printf("salery=%d\n",salery);
 printf("bonus=%d\n",bonus);
 printf("netsal=%d\n",netsal);
 getch();
 }

