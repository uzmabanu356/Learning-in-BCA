/*Simple inheritance*/

import java.util.*;
class A
{
   int a;
   int b;
   void msg(){
   System .out.println("This is parent class");
  }
}
 class C extends A
{
   
    void disp(){
    System.out.println("This is Child class"); 
    System.out.println("Enter two number:");
    Scanner sc= new Scanner(System.in);
     a=sc.nextInt();
    b=sc.nextInt();
    int sum;
    sum=a+b;
    System.out.println("sum is: " +sum);
   }
    public static  void main(String[] args){
    C obj=new C();
     obj.msg();
    obj.disp();

}
}