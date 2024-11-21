abstract class Shape {
    abstract void draw(); // Abstract method
}

class Circle extends Shape {
    void draw() {
        System.out.println("Drawing a Circle.");
    }
}

public class AbstractClass {
    public static void main(String[] args) {
        Shape obj = new Circle();
        obj.draw();
    }
}
