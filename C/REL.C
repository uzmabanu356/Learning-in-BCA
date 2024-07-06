#include<stdio.h>
#include<conio.h>
void main(){
int a,b;
clrscr();
scanf("%d%d",&a,&b);
//printf("%d%d%d%d%d%d",a<b,a>b,a<=b,a>=b,a!=b,a==b);
printf("Lessthan is or not=%d\n",a<b);
printf("Gretterthan is or not=%d\n",a>b);
printf("Lessthan equalto is or not=%d\n",a<=b);
printf("Gretterthan equalto is or not=%d\n",a>=b);
printf("Not equalto is or not=%d\n",a!=b);
printf("Equalto is or not=%d\n",a==b);
getch();
}