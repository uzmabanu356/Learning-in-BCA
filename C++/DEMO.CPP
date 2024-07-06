#include<iostream.h>
#include<conio.h>
class jony;
class tony
{
  int a;
  private:
  void setvalue(int x)
  {
    a=x;
    }
    friend void rony ( jony,tony);
    };
    class jony
    {
    int b;
    private:
    void setvalue(int y)
    {
     b=y;
     }
     friend void rony(jony,tony);
     };
     void rony(jony r1,tony r2)
     {
       cin >>r1.b;
       cin>>r2.a;
       cout<<"sum ="<<r1.b+r2.a;
       }
       void main()
       {
       clrscr();
       jony obj1;
       tony obj2;
       rony(obj1,obj2);
       getch();
       }