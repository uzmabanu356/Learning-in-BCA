#include<stdio.h>
#include<conio.h>
int add(int,int,int);
int averag(int,int,int);
void main()
{
int a,b,c,sum,avg;
clrscr();
printf("enter therr number: \n");
scanf("%d%d%d",&a,&b,&c);
sum=add(a,b,c);
printf("sum is : %d\n",sum);
avg=averag(a,b,c);
printf("averag is : %d",avg);
getch();
}

//function 1
 int add(int x,int y,int z)
 {
 int d;
 d=x+y+z;
 return d;
 }
//function 2
int averag(int x,int y,int z)
 {
  int d;
  d=x+y+z/3;
 return d;
 }


