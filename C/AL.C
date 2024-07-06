#include<stdio.h>
#include<conio.h>
void main(){
int i=0,n;
clrscr();
printf("enter number");
scanf("%d",&n);
while(i<=n)
{
printf("%d\n",i);
i*2;
}
getch();
}