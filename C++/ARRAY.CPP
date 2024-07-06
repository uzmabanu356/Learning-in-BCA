#include<stdio.h>
#include<conio.h>
void main(){
int a[10],i;
clrscr();
printf("Enter ten number :");
for(i=1;i<=9;i++)
 {
   scanf("%d",&a[i]);
   }
   printf("Even number\n");
   for( i=1;i<=9;i++)
    {
     if(a[i]%2==0)
       {
	printf("%d",a[i]);
	printf("\n");
	 }
	  }
	      getch();
	      }
