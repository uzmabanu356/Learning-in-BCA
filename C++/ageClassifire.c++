#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if(age<2 && age>0)
     cout<<"baby"<<endl;
     else if(age<6 && age>2)
     cout<<"infant"<<endl;
    else if(age<12 && age>6)
     cout<<"childe"<<endl;
      else if(age<19 && age>12)
     cout<<"Teenage"<<endl;
      else if(age<25 && age>19)
     cout<<"adult"<<endl;
      else if(age<110)
     cout<<"senior"<<endl;
      else
      cout<<"sorry"<<endl;
      return 0;
}