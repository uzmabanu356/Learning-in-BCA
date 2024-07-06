#include<stdio.h>
#include<conio.h>
void main()
{
 int per;
 clrscr();
 printf("enter your percent:-");
 scanf("%d",&per);
 if(per>=60)
   printf("first division");
   else if(per>=48)
   printf("second division");
   else if(per>=36)
   printf("third division");
  else
   printf("fail");
 getch();
}