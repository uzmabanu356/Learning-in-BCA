#include<iostream>
using namespace std;

class complex 
{
    private:
    int a,b;
    public:
    void input(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"\na="<<a<<endl<<"b="<<b;
    }
    friend complex operator-(complex);
};
complex operator-(complex X)
{
    complex temp;
    temp.a=-X.a;
    temp.b=-X.b;
    return temp;
}
int main()
{
 complex c1,c2;
 c1.input(3,4);
 c2=-c1; //c2=operator-(c1)
 c2.showData();
 return 0;
}