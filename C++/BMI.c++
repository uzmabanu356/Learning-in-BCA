#include<iostream>
using namespace std;

int main()
{
     char gen;
    float hight,weight;
    cout<<"Entere your gender:"<<endl;
    cin>>gen;
     cout<<"Enter your hight and weight:"<<endl;
      cin>>hight>>weight;
    if(gen=='f')
      {
          if(hight<=4.0 && weight<=35.0)
            cout<<"Underweight"<<endl;
          else if(hight<=5.0 && weight<=50.0)
            cout<<"Normalweight"<<endl;
           else if(hight<=6.0 && weight<=65.0)
            cout<<"Overweight"<<endl;
             else if(hight<=6.5 && weight<=80.0)
            cout<<"Obese"<<endl;
            else
             cout<<"You are need exercise and bast diet plan"<<endl;
         }
         else{ 
           if(hight<=4.0 && weight<=40.0)
               cout<<"Underweight"<<endl;
            else if(hight<=5.0 && weight<=53.0)
                cout<<"Normalweight"<<endl;
             else if(hight<=6.0 && weight<=70.0)
                cout<<"Overweight"<<endl;
             else if(hight<=6.5 && weight<=89.0)
               cout<<"Obese"<<endl;
             else
                 cout<<"You are need exercise and bast diet plan"<<endl;
         }
         return 0;
}