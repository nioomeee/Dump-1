// Write a Java program to remove the duplicate elements of a given array and return the
// new length of the array.
// Example array: [20, 20, 30, 40, 50, 50, 50]

class Solution {
    
    public void removeDuplicates(int arr[], int size) {
        int temp[] = new int[size];
        int ind = 0;
        boolean isDuplicate;

        for(int i = 0; i < size; i ++) {

            isDuplicate = false;

            for(int j = 0; j < size; j ++) {
                if (arr[i] == temp[j]) {
                    isDuplicate = true;
                    break;
                }
            }

            if(!isDuplicate) {
                temp[ind] = arr[i];
                ind ++;
            }

        }

        // displaying the array without duplicates and new length
        for(int i = 0; i < ind; i ++) {
            System.out.print(temp[i] + " ");
        }

        System.out.println("\nThe new size of the array = " + ind);

    }
}

public class q3 {
    public static void main(String[] args) {
        int arr[] = {20, 20, 30, 40, 50, 50, 50};
        int size = arr.length;

        Solution sol = new Solution();
        sol.removeDuplicates(arr, size);
        
    }
}
