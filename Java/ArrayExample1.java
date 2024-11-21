public class ArrayExample1 {
    public static void main(String[] args) {
        int[] arr = {10, 20, 30};

        System.out.println("Accessing elements in the array:");
        System.out.println(arr[0]); 
        System.out.println(arr[1]); 
        System.out.println(arr[2]); 

        // This line will throw ArrayIndexOutOfBoundsException
        System.out.println(arr[3]); // Error: ArrayIndexOutOfBoundsException
    }
}
/*
Output:-
Accessing elements in the array:
10
20
30
Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: Index 3 out 
of bounds for length 3
        at ArrayExample1.main(ArrayExample1.java:11)
		*/