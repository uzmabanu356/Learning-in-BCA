final class FinalClass {
    final int constant = 10; // Final variable

    final void display() { // Final method
        System.out.println("This is a final method in a final class.");
    }
}

public class FinalKeywordExample {
    public static void main(String[] args) {
        FinalClass obj = new FinalClass();
        System.out.println("Constant: " + obj.constant);
        obj.display();
    }
}

/*
Constant: 10
This is a final method in a final class.
                           */
