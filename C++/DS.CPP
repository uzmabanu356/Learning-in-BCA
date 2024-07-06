#include<stdio.h>
#include<conio.h>
#definemax 2
void push();
void pop();
void peep();
int x;
int a[x];
int tos=-1;
void main()
{
int c,ch;
printf("press any key for continue and 9 for exit-");
sacnf("%d",&c);
while(c!=9)
 {
 printf("1 for push -\n");
 printf("2 for pop -\n");
 printf("3 for peep -\n");
 printf("Enter your choice -");
 scanf("%d",&ch);
 switch(ch)
 {
   case 1:
	push();
	break;
    case 2:
	 pop();
	 break;
     case 3:
	 peep();
	 break;
     default:
	 printf("invalid chice");
	 break;
	 }
 printf("press any key for continue and 9 for exit-");
 scanf("%d",&c);
 }
 getch();
}

 void push()
 {
