package mypackage;

public class MyClass {
    public void display() {
        System.out.println("This is a class in a package.");
    }

    public static void main(String[] args) {
        MyClass obj = new MyClass();
        obj.display();
    }
}
/*
Output:-
This is a class in a package.
    */