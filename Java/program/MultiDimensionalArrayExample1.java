public class MultiDimensionalArrayExample1 {
    public static void main(String[] args) {
        // Declare and initialize a 2D array
        int[][] arr = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        System.out.println("Elements of the 2D array:");

        // Loop through the array to print elements
        for (int i = 0; i < arr.length; i++) {           // For each row
            for (int j = 0; j < arr[i].length; j++) {    // For each column
                System.out.print(arr[i][j] + " ");
            }
            System.out.println(); // New line after each row
        }
    }
}


OUTPUT:-

Elements of the 2D array:
1 2 3
4 5 6
7 8 9
