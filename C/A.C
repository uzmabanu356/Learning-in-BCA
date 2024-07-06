#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
add();
iseven();
add();
iseven();
return 0;
}
add()
{
int a,b,c;
printf("enter two number");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum is %d",c);
}
iseven()
{
int a;
printf("enter any number");
scanf("%d",&a);
if(a%2==0)
  {
 printf("even number");
 }
else
   {
  printf("odd number");
  }
}
getch();
}