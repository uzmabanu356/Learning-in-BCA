interface Parent {
    void parentMethod();
}

interface AnotherParent {
    void anotherMethod();
}

class Child implements Parent, AnotherParent {
    public void parentMethod() {
        System.out.println("Parent method implemented.");
    }

    public void anotherMethod() {
        System.out.println("Another parent method implemented.");
    }
}

public class HybridInheritance {
    public static void main(String[] args) {
        Child obj = new Child();
        obj.parentMethod();
        obj.anotherMethod();
    }
}


/*
Output:-
Parent method implemented.
Another parent method implemented.
                   */