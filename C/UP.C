#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,sub,mul,div,rem;
clrscr();
printf("enter two number:-\n");
printf("a=\n");
printf("b=\n");
scanf("%d%d",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
rem=a%b;
printf("sum=%d\nsub=%d\nmul=%d\ndiv=%d\nrem=%d",sum,sub,mul,div,rem);
getch();
}
