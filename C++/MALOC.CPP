#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int n,*a,i,sum=0;
clrscr();
printf("Enter many elements :- \n");
scanf("%d",&n);
a=(int *)malloc(n*sizeof(int));
printf("enter the element :-\n");
for(i=0;i<n;i++)
  {
   scanf("%d",a+i);
   }
  for(i=0;i<n;i++)
  {
   sum=sum+ *(a+i);
   }
   printf("sum of all elements of array:-%d",sum);
   getch();
   }
