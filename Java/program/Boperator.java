public class Boperator {
    public static void main(String[] args) {
        int a = 5;    // Binary: 0101
        int b = 3;    // Binary: 0011
        
        System.out.println("a AND b (bitwise): " + (a & b));  // Performs AND on each bit of a and b
        System.out.println("a OR b (bitwise): " + (a | b));   // Performs OR on each bit of a and b
        System.out.println("a XOR b (bitwise): " + (a ^ b));  // Performs XOR on each bit of a and b
        System.out.println("NOT a (bitwise): " + (~a));       // Flips all bits of a
    }
}
/*
Output:-
a AND b (bitwise): 1
a OR b (bitwise): 7
a XOR b (bitwise): 6
NOT a (bitwise): -6
       */