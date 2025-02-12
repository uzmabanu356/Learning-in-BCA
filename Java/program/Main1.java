final class FinalEx{
           final int a=10;

        final void disp(){
                System.out.println("This is final method:");
             }
     }
class Main1{
     public static void main(String[] args){
       FinalEx obj=new FinalEx();               
        System.out.println("final variable:" +obj.a);  
       obj.disp();
     }
}


