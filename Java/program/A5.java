//Single inheritance

class A1{
  int a =10;
  int b=20;
  public void F1(){
  System.out.println("This is A1 class! ");
  }
}

class A2 extends A1{
  public void  F2(){
  System.out.println("This is A2 class! ");
    }
  }

 class A3 extends A1{
  public void  add(){
  System.out.println("This is A3 class! ");
  System.out.print("Addition of two number:- ");
  int c= a+b;
  System.out.println(c);   
    }
  }
   
 class A5{
  public static void main(String[]args)
 {

  System.out.println("Inherite by class A2 ! ");
    A2 obj1=new A2(); 
    obj1.F1();
     obj1.F2(); 
  System.out.println("Inherite by class A3 ! ");
    A3 obj2=new A3(); 
    obj2.F1();
    obj2.add();
   }
}


