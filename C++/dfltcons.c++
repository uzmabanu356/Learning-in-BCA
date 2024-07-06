#include<iostream>
using namespace std;

class Complex
{
    private:
    int a,b;
    public:
    Complex()
    {
      cout<<"Good morning India"<<endl;   
    }
    void input()
    {
        cout<<"Enter two number:-"<<endl;
        cin>>a>>b;
    }
};

int main()
{
    Complex c1,c2;
   c1.input();
    return 0;
}