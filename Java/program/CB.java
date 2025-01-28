/*herichical inheritance*/

import java.util.*;
class A
{
   int a;
   int b;
   void msg(){
   System .out.println("This is parent class access by class B");
  }
   void msg2(){
   System .out.println("This is parent class access by class CB");
  }
}

class B extends A
{
    void disp(){
    System.out.println("This is Child class"); 
   }
}

 class CB extends A
{
   void demo(){
    System.out.println("this is third child class"); 
    }
    public static  void main(String[] args){
    B obj=new B();
    obj.msg();
    obj.disp();
    CB obj2=new CB();
    obj2.msg2();
    obj2.demo();
}
}