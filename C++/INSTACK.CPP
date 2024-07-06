#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5
void push();
void display();

int stack[MAXSIZE],top=-1,choice;
void main()
{
 do
 {
 printf("\n-------------STACK-------------\n");
 printf("\n1. push \n 2. display \n 3.exit\n");
 printf("----------------------------------");
 printf("\nEnter your choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1: push();
  break;
  case 2: display();
  break;
  default:
  printf("Invalid choice");
 }
 }
 while(choice!=3);
 clrscr();
 getch();
 }
//define push function
 void push()
 {
 int n;
 if (top==MAXSIZE-1)
 {
  printf("stack is overfllow\n");
  }
 else
 {
   printf("Enter an element in stack\n");
   scanf("%d",&n);
   top++;
   stack[top]=n;
   }
 }

   // define display function
 void display()
 {
  int i;
  if(top==-1)
  {
  printf("stak is empt\ny");
  }
  else
  {
    printf("Element of stack\n");
    for(i=top;i>=0;i--)
    {
    printf("\n%d",stack[i]);
    }
  }
}
