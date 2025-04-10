// Write a Java program to create an array with 10 elements and sort it.
class Solution {
    public void sortArray(int arr[]) {
        for(int i = 0; i < arr.length; i ++) {
            for(int j = i+1; j < arr.length; j ++) {
                if (arr[j] < arr[i]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        System.out.println("Printing the sorted array: ");
        for(int i = 0; i < arr.length; i ++) {
            System.out.print(arr[i] + " ");
        }
    }
}

public class q4 {
    public static void main(String[] args) {
        int arr[] = {5, 1, 9, 3, 4, 7, 10, 2};
        Solution sol = new Solution();

        sol.sortArray(arr);
    }
}
