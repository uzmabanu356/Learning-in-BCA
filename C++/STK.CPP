#include<stdio.h>
#include<conio.h>
#define MAX 10
int stack[MAX],Top=-1;
void push();
void pop();
void display();
void main()
{
   int choice;
   clrscr();
    do{
   printf("----------------STACK-----------------/n");
   printf("1.push \n 2.pop\n 3.display\n 4.Exit");
   printf("Enter your  choice ");
   scanf("%d",&choice );
   switch (choice)
     {
       case 1:
       push();
       break;
       case 2:
       pop();
       break;
       case 3:
       display();
       break;
       default:
       printf("Invalid chpice");
       }
       }
      while(choice!=4);
  getch();
  }
void push()
  {
    int num;
    if (Top==MAX-1)
       {
       printf("Overflow stack");
       }
    else
    {
	printf(" Enter an element");
	scanf("%d",&num);
	Top++;
	 stack[MAX]=num;
	 }
   }
  void pop()
   {
   int num;
   if (Top==-1)
      {
       printf("Stake is empty");
       }
   else
   {
     num=stack[Top];
     Top--;
     printf("poped element ");
     printf("%d",num);

     }
   }
  void display()
   {
    int i;
    if (Top==-1)
    printf("Stack in empty");
    else
    {
      printf("Element of Stack \n");
      for(i=Top;i>=0;i--);
      printf("%d\n"stack[i]);
      }
      }