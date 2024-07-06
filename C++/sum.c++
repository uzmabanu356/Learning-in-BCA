#include<iostream>
using namespace std;

int main()
{
    int num,a,b,c,i;
    cout<<"Enter a number:"<<endl;
    cin>>num;
  for(i=1;i<=num;i++)
   { 
        cout<<"Enter two number :"<<endl;
        cin>>a>>b;
        c=a+b;
        cout<<"sum="<<c<<endl;
  }
    return 0;
}
