#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"Enter four number :"<<endl;
    cin>>a>>b>>c>>d;
    if(a>b)
    {
        if(a>c)
        {
            if (a>d)
            {
                cout<<"A is maximum"<<endl;
            }
            else{
                cout<<"C is maximum"<<endl;
            }
            }
            else{
                cout<<"D is maximum"<<endl;
            }
    }
            else{
                if(b>c)
                {
                    if(b>d)
                    {
                        cout<<"B is maximum"<<endl;
                    }
                    else{
                        cout<<"D is maximum"<<endl;
                    }
                }
                else{
                     if(c>d)
                     {
                        cout<<"C is maximum"<<endl;
                     }
                     else{
                        cout<<"D is maximum"<<endl;
                     }
                }
            }
             return 0;     
}
            
            
        
