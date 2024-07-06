#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter Three number:"<<endl;
    cin>>a>>b>>c;
    if(a<b)
    {
     if(a<c)
     {
        cout<<"A is minimum"<<endl;
     }    
     else{
        cout<<"C is minimum"<<endl;
     }
    }
    else{
        if(b<c)
        {
            cout<<"B is minimum"<<endl;
        }
        else{
            cout<<"C is minimum"<<endl;
        }
    }
    return 0;
}