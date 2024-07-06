#include<stdio.h>
#include<conio.h>
void main(){
int i=1,a;
clrscr();
do
{
printf("%d\t",i/3&&i/5);
i++;
}
while(i<=100);
getch();
}