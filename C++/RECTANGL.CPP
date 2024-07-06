#include<conio.h>
#include<iostream.h>
struct Rectangle
  {
    int length;
    int width;
  };

void main()
 {
   struct Rectangle a;
   clrscr();
   cout<<"Enter Length and Width of rectangle:-";
   cin>>a.length>>a.width;
 //Calculate area of ractangle
   int area;
   area=a.length*a.width;
 //print area
  cout<<"Area of Rectangle :-"<<area<<endl;
 getch();
 }