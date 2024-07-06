#include<stdio.h>
#include<conio.h>

void main()
{
 int a[5][5];
 int i,j;
  clrscr();
 for(i=1;1<5;i++)
  for(j=0;j<5;j++)
   a[i][j]=0;
   a[0][0]=1;
   a[0][1]=1;
   a[0][3]=1;
   a[1][2]=1;
   a[2][4]=1;
   a[3][2]=1;
 printf("adjacency matrix");
 for(i=0;i<5;i++)
 {
  printf("\n");
  for(j=0;j<5;j++)
   printf("%d\t",a[i][j]);
   }
  getch();
  }