#include<stdio.h>
#include<conio.h>
void main(){
float length,base,area;
clrscr();
printf("Enter length and base=");
scanf("%f%f",&length,&base);
area=(length*base)*1/2;
printf("area=%f",area);
getch();
}