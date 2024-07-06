#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("enter any character:-");
scanf("%c",&a);
switch (a)
{
case'a':
case'e':
case'i':
case'o':
case'u':
case'A':
case'E':
case'I':
case'O':
case'U':
printf("vowel");
break;
default:
printf("consonant");
}
getch();
}


