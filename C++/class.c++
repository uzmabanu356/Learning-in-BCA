#include<iostream>
using namespace std;
class school
{
    private:
    int a,b,sum;
    public:
   // Default constructor
  /*school()
   {cout<<"default constructor"<<endl;}*/
   //parameterized constructor
   school(int x,int y)
   {
    a=x;
    b=y;
    cout<<"parameterized constructor"<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
   }
   // Copy constructor
   school(school &ref)
   {
     a=ref.a;
     b=ref.b;
     int sub=a-b;
     cout<<"Copy constructor"<<endl;
    cout<<"sub="<<sub<<endl;

   }
   void input()
   {
      cout<<"Enter two number:"<<endl;
      cin>>a>>b;
      }
    void add()
    {
        input();
        sum=a+b;
        cout<<"sum="<<sum<<endl;
     }
};
int main()
{
    school obj2(8,4);
    school obj3=obj2;
    obj2.add();
    return 0;
}