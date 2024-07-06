#include<iostream>
using namespace std;
 class complex 
 {
    private:
     int a,b;
     public:
     void input()
     {
      cout<<"Enter two number:-"<<endl;
      cin>>a>>b;
     } 
     void showData()
     {
      cout<<"a="<<a<<endl<<"b="<<b<<endl;        
     }
     complex operator -(complex c)
     {
        complex temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return temp;     
     }

 };
 int main()
 {
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=c1-c2;
    c3.showData();
    return 0;
 }