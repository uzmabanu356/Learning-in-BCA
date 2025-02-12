import java.util.*;

public class Function
 {
      public static void printName(String name)
      {  
        
          System.out.print("Print your name:- ");
         System.out.println(name);
         return;
   }
  
  public static void main(String args[])
   {
     
     System.out.print("Enter your name:- ");
     Scanner sc=new Scanner(System.in);
     String name= sc.next();
     
    printName(name);
   }
}