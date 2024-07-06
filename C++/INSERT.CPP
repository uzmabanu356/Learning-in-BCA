#include<stdio.h>
#include<conio.h>
int main()
{
 clrscr();
 int arr[7];
 int item,i,flag=0;
 printf("Enter seven element :-\n");
 for(i=0;i<=6;i++)
 {
  scanf("%d",&arr[i]);
  }
  printf("Enter searching element:-\n");
  scanf("%d",&item);
  for(i=0;i<=6;i++)
  {
  if(item==arr[i])
   {
    flag=1;
    break;
    }
    }
    if(flag=1)
    {
     printf("Element is found:- %d\n",item);
     printf("Index number of element:-%d",i);
     }
    else
    {
     printf("element is not found");
     }
     getch();
     }

