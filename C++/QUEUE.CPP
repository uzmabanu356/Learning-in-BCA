#include<stdio.h>
#include<conio.h>
#define Maxsize 10
int queue[Maxsize];
int rear=-1,front=0;
void insert();
void Delete();
void Display();
void main()
{
   clrscr();
   int choice;
  do
{
  printf("\n------------------QUEUE------------------");
  printf("\n1.Insert\\n2.Delete\n3.Display\n4.Exit");
  printf("\nEnter your choice:- ");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    insert();
    break;
    case 2:
    Delete();
    break;
    case 3:
    Display();
    break;
    default:
    printf("Invalid choice");
    }
  }
    while(choice!=4);
    getch();
  }
  void insert()
  {
    int n;
    if(rear==Maxsize-1)
    printf("Queue is overfllow\n");
    else
    {
      printf("Enter an Element\n" );
      scanf("%d",&n);
      rear++;
      queue[rear]=n;
      }
     }

 void Delete()
 {
  int n;
  if(front==rear)
  printf("Queue i s empty");
  else
  {
    n=queue[front];
    printf("element is delete %d",n);
    front++;
    }
  void Display()
  {
   int i;
   if(front==rear)
   printf("Queue is empty");
   else
   {
   printf("Queue element \n");
   for(i=rear;i>=front;i--);
   {
   printf("%d\n",queue[i]);
   }
  }
 } m