abstract  class shape{
     abstract  void drow();
  }  

class circle extends shape{
  void drow(){
  System.out.println("This is Circle shap!");
  }  
}

class MainAB{ 
  public static void main(String[] args){
   shape obj= new circle();
   obj.drow();
  }
}

