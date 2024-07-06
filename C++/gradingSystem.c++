#include<iostream>
using namespace std;

int main()
{
    int score;
    cout<<"Enter your Score:- "<<endl;
    cin>>score;
    if(score>=75)
    cout<<"score="<<score<<"\nGrade=A"<<endl;
    else if(score>=65)
    cout<<"score="<<score<<"\nGrade=B"<<endl;
    else if(score>=55)
    cout<<"score="<<score<<"\nGrade=C"<<endl;
    else if(score>=45)
    cout<<"score="<<score<<"\nGrade=D"<<endl;
    else if(score>=35)
    cout<<"score="<<score<<"\nGrade=E"<<endl;
    else
    cout<<"score="<<score<<"\nFail"<<endl;
    return 0;
}