#include<iostream>
using namespace std;
class B;
class A
{
    private:
    int a;
    public:
    void setData()
    {
        cout<<"Enter a number:-"<<endl;
        cin>>a;
    }
    friend void fun(A,B);
};

class B
{
    private:
    int b;
    public:
    void setData()
    {
        cout<<"Enter  a number:-"<<endl;
        cin>>b;
    }
    friend void fun(A,B);
};
void fun(A o1,B o2)
{    

     cout<<"sum is="<<o1.a+o2.b<<endl;

}
int main()
{
    A obj1;
    B obj2;
    obj1.setData();
    obj2.setData();
    fun(obj1,obj2);
    return 0;
}