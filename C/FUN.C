#include<stdio.h>
#include<conio.h>
void namaste();
void bonjour();
void main()
{
char c,i;
clrscr();
printf("enter your nationality:-");
scanf("%c",&c);
if(i==c)
{
namaste();
} else
     {
      bonjour();
      }
getch();
}
void namaste()
{
printf("aadab");
printf("\nnamaste");
}

void bonjour()
{
printf("hello");
printf("\nbonjour");
}

