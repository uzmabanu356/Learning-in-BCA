#include<stdio.h>
#include<conio.h>
void main(){
int i,r;
clrscr();
//printf("Enter Any Number");
//scanf("%d",&num);
for(i=1;i<=100;i++)
{
printf("%d\t",i);
r=(i/3)&&(i/5);
}
getch();
}