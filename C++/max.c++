#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three number \n";
    cin>>a>>b>>c;
    if(a>b)
     {
        if(a>c)
        {
            cout<<"A is max "<<endl;
            
        }
        else
            {
                cout<<"c is max "<<endl;
            }
     }
     else
     {
        if(b>c)
        {
             cout<<"B is max"<<endl;
            
        }
        else
        {
            cout<<" C is max "<<endl;
        }
     }
     return 0 ;
}