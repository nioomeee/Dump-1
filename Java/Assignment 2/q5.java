// Write a Java program to create a two-dimensional array and find the minimum value out
// of it.

public class q5 {
    public static void main(String[] args) {
        int arr[][] = {
            {34, 21, 89},
            {12, 78, 45},
            {67, 11, 90}
        };

        int min = arr[0][0];

        for(int i = 0; i < arr.length; i ++) {
            for(int j = 0; j < arr[i].length; j ++) {
                if(arr[i][j] < min) {
                    min = arr[i][j];
                }
            }
        }

        System.out.println("The minimum value in the 2D array = " + min);
        

    }
}
