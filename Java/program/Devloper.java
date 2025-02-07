import  java.util.*;
interface client{
 void input();
 void output();
}

class Devloper implements client{
     String name ;
     int salary;

  public void input(){
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter name:-");
  name=sc.nextLine();
  System.out.println("Enter salary:-");
  salary=sc.nextInt();
}

  public void output(){
    System.out.println("name"+name +" ");
    System.out.println("salary"+salary);
  }
 

public static void main(String[] args)
{

 Devloper d= new Devloper();
   d.input();
  d.output();
  }
}