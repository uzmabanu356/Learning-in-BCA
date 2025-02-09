import java.util.*;

public class FunctionMulti
 {
  
   public static void addNum(int a,int b)
   {
       int multi=a*b;
       return multi;
   } 
 public static void main(String args[])
  {
     int multi;
     System. out.println("Enter two number :-");
     Scanner sc=new Scanner(System.in);
      int a=sc.nextInt();
      int b=sc.nextInt();
     addNum(a,b);
     System.out.print("Product= "+multi);
  }
}
  
       