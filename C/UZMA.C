#include<stdio.h>
#include<conio.h>
void main(){
int a,b=1,c;
clrscr();
printf("enter any number=");
scanf("%d",&a);
while(b<=10)
{
c=a*b;
printf("%d*%d=%d\n",a,b,c);
b++;
}
getch();
}