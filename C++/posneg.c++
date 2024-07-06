#include<iostream>
using namespace std;
int main()
{
   int num;
   cout<<"Enter any number: "<<endl;
   cin>>num;
   if(num>1)
    {
        if(num!=0)
        {
        cout<<"number is positive"<<endl;
        }
    else{
        cout<<"Zero"<<endl;
        }    
    }
    else{
        if(num<=1 && num !=0)
        {
            cout<<"number is negative"<<endl;
        }
        else{
            cout<<"Zero"<<endl;
        }
    }
   return 0;
}