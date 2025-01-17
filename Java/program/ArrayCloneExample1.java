public class ArrayCloneExample1 {
    public static void main(String[] args) {
        int[] originalArray = {1, 2, 3, 4, 5};

        // Cloning the array
        int[] clonedArray = originalArray.clone();

        // Printing original array
        System.out.println("Original Array:");
        for (int i : originalArray) {
            System.out.print(i + " ");
        }

        // Printing cloned array
        System.out.println("\nCloned Array:");
        for (int i : clonedArray) {
            System.out.print(i + " ");
        }

    }
}

/*
OUTPUT:-

Original Array:
1 2 3 4 5
Cloned Array:
1 2 3 4 5
       */
