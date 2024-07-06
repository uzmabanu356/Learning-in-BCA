#include<iostream>
using namespace std;
 
 int main()
 {
    char c;
    cout<<"Enter any character :" <<endl;
    cin>>c;
    switch(c)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<"This character is Vowel "<<endl;
        break;
        default :
        cout<<" This character is consonant"<<endl;
        }
        return 0;
 }
