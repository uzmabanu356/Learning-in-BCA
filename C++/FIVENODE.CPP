#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node create();
struct node insertion();
struct node display();
struct node
{
  int data;
  struct node *add;
  }; struct node *start=NULL,*new1,*temp;

  void main()
  {
   int choice;
   do
   {
   clrscr();
   printf("\n----------LINKED LIST-------------");
   printf("\n1.create \n2.insert\n3.display \n4.exite");
   printf("\nEnter your choice: ");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1:
    create();
    break;
    case 2:
    insertion();
    break;
    case 3:
    display();
    break;
   default:
    printf("\ninvalid choice");
   }
  }
  while(choice!=4);
   getch();
   }
struct node create()
  {
    int n;
    char ch;
    printf("Enter an element ");
    scanf("%d",&n);
    start=(struct node*) (malloc (sizeof(struct node)));
    start ->data=n;
    start ->add=NULL;
    temp=start;
   printf("\n want to continue");
  scanf("%c",&ch);
   while(ch=='y' || ch=='Y')
    {
    printf("\n enter next element " );
    scanf("%d",&n);
    new1 -> data=n;
    new1 ->add=NULL;
    temp ->add=new1;
    temp=temp ->add;
    printf("want to continue");
    scanf("%c",&ch);
    }
   }
    struct node display()
 {
  if(start==NULL)
  {
   printf("list not found\n");
   }
   else
   {
    temp=start;
    while(temp!=NULL)
    {
     printf("\t %d",temp->data);
     temp=temp->add;
       }
     }
   }

  // Insertion node at beginning
 struct node insertion()
 {
   int n,i;
   if(start==NULL)
    {
      printf("\nList not found");
      }
    else
    {
     for(i=0;i<=5;i++)
     {
     printf("Enter new element for insert");
     scanf("%d",&n);
     new1=(struct node*) (malloc (sizeof(struct node)));
     new1 ->data=n;
     new1 ->add=NULL;
     new1 ->add=start;
     start=new1;
     }
     }
    }
