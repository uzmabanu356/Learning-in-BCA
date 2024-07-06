#include<stdio.h>
#include<conio.h>
void main()
{
int per;
clrscr();
printf("Enter your percent:-");
scanf("%d",&per);
if(per>90)
  printf("Grade- A");
 else if (per>80)
 printf("Grade- B");
 else if(per>70)
 printf("Grade- C");
else if(per>60)
 printf("grade- D");
 else
 printf("fail");

getch();
}