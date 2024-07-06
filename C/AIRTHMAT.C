#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,sub,mul,rem,div;
clrscr();
printf("Enter two number=\n");
scanf("%d%d",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
rem=a%b;
div=a/b;
printf("sum=%d\nsub=%d\nmul=%d\nrem=%d\ndiv=%d",sum,sub,mul,rem,div);
getch();
}