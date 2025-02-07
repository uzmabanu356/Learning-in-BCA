class shape{
  void drow(){
  System.out.println("Can't say shap type!");
  }  
}

class square extends shape{
  @Override
  void drow(){
  System.out.println("This is square shap!");
  }  
}

class Main{ 
  public static void main(String[] args){
   square obj= new square();
   obj.drow();
  }
}

