#include<stdio.h>
#include<conio.h>
void main(){
int no,i;
clrscr();
printf("Enter any number");
scanf("%d",&no);
for(no=1;no>=5;no--)
	{
	i=no*i;
	}
printf("factorial=%d",i);
getch();
}