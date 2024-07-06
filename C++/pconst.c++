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
    Complex(int x,int y)
    {
        a=x;
        b=y;
        cout<<"a="<<a<<" "<<"b="<<b;
    }
};
int main()
{
    Complex c1,c2(2,3);
    return 0;
}