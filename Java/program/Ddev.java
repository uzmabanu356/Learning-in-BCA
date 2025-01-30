import java.util.*;

interface client
{
  void input();
  void output();
}

 class Ddev implements client
{
  String name;
  int salary;

 public void input()
 {
   Scanner sc= new Scanner(System. in);
   System.out.println("Enter your name:  ");
   name=sc.nextLine();

   System.out.println("Enter your salary:  ");
   salary=sc.nextInt(); 
}

  public void output() 
  {
   System.out.println(name+" "+salary);      
  }

public static void main(String[] args)
{
   client r= new Dev();
    r.input(); 
     r.output();
}
}
