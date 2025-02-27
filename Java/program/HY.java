// Hybride inheritance

interface  A1{
void fun1();
}

interface  A2{
void fun2();
}

class A3 implements A1,A2{
public void fun1(){
System.out.println("inteface 1");
  }

public void fun2(){
System.out.println("inteface 2");
  }
}

class A4 extends A3{
public void show(){
System.out.println("Extends class");
 }
}

class HY{
public static void main(String []  args){

A3 obj2=new A3();
obj2.fun1();
obj2.fun2();

A4 obj3=new A4();
obj3.fun1();
obj3.fun2();
obj3.show();
  }
}