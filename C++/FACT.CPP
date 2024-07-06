#include<iostream.h>
#include<conio.h>
int y=1;
class factorial
{
public:
int i,x;
void fact();
void display();
void input();
};
void factorial :: input()
{
cin>>x;
}
void factorial :: fact()
{
for(i=1;i<=x;i++)
{
y=y*i;
}
}
void factorial::display()
{
cout<<"factorial of number is"<<y;
}
void main()
{
clrscr();
factorial s1;
s1.input();
s1.fact();
s1.display();
getch();
}

