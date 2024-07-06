#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
  int data;
  struct node *add;
  };
  struct node  *start=NULL,*new1;

    struct node insrtion()
  {
    int n;
    printf("Enter nymber") ;
    scanf("%d",&n);
    new1=(struct node*) (malloc(sizeof(struct node)));
    new1->data=n;
    new->
    add=NULL;
    new->add=start;
    start=new1;
    return 0;
    }

    void main()
  {
   int choice;
   do
   {
   clrscr();
   printf("\n----------LINKED LIST-------------");
   printf("\n1.insert\n2.exite");
   printf("\nEnter your choice: ");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1:
    insertion();
    break;
   default:
    printf("\ninvalid choice");
   }
  }
  while(choice!=2);
   getch();
   }
