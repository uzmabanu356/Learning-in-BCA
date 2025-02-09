import java.util.*;

public class FunctionAdd
 {
  
   public static void addNum(int a,int b)
   {
       int sum=a*b;
       System.out.print("Sum= "+sum);
       return;
   } 
 public static void main(String args[])
  {
     System. out.println("Enter two number :-");
     Scanner sc=new Scanner(System.in);
      int a=sc.nextInt();
      int b=sc.nextInt();
     addNum(a,b);
  }
}
  
       