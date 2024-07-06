#include<stdio.h>
#include<conio.h>
void main()
 {
  int a;
  int *p,**q,***r;
  p=&a;
  q=&p;
  r=&q;
  clrscr();
  printf("Enter a number \n");
  scanf("%d",&a);
  printf("a=%d",a);
  printf("\na=%d %u ",*p,p);
  printf("\np=%d %u",**q, q);
  printf("\nr=%d %u",***r,r);
  getch();
  }