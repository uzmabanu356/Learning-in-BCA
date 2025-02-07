//Single inheritance

class A1{
  int a =10;
  int b=20;
  public void F1(){
  System.out.println("This is A1 class! ");
  }
}

class A2 extends A1{
  public void  add(){
  System.out.println("This is A2 class! ");
  System.out.print("Addition of two number:- ");
  int c= a+b;
  System.out.println(c);   
}
 public static void main(String[]args)
{
   A2 obj=new A2();
   obj.F1();
   obj.add(); 
      }
   }
 

 
/* class A3{
  public static void main(String[]args)
 {
    A2 obj=new A2(); 
    obj.F1();
    obj.add();
   }
}*/


