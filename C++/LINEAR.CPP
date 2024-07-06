#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[9]={11,22,33,44,55,66,77,88,99};
 int lr=0,up=8,mid,item,i,flag=0;
 clrscr();
 printf("enter number for searching:- \n");
 scanf("%d",&item);
 while(lr<up)
  {
   mid=(lr+up)/2;
   if(arr[mid]==item)
  {
    flag=1;
    break;
    }
  else if(arr[mid]<item)
  {
   lr=mid+1;
   }
   else
   {
    up=mid-1;
    }
   }
  if(flag==1)
  {
  printf("element is found:- %d\n",item);
  printf("index number of found element:- %d",mid);

  }
  else
  {
  printf("element in not foiund");
  }
  getch();
  }