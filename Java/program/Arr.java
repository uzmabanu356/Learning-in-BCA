public class Arr {
    public static void main(String[] args) {
        int[] arr = {10, 20, 30};

        System.out.println("Accessing elements in the array:");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]); // Safely accesses each element
        }

        // Check before accessing an index beyond the array length
        int indexToAccess = 3; // Example index
        if (indexToAccess >= 0 && indexToAccess < arr.length) {
            System.out.println(arr[indexToAccess]);
        } else {
            System.out.println("Index " + indexToAccess + " is out of bounds!");
        }
    }
}
