class Parent {
    void display() {
        System.out.println("Parent class method.");
    }
}

class Child extends Parent {
    @Override
    void display() {
        System.out.println("Child class method (overridden).");
    }
}

public class MethodOverriding {
    public static void main(String[] args) {
        Parent obj = new Child();
        obj.display(); // Calls the overridden method in Child class
    }
}

/*

Output:-
Child class method (overridden).
    */
