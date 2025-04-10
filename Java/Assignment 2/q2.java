// Write a java Program to remove duplicate element in an Array
import java.util.Scanner;

class Solution {
    void removeDuplicates(int numbers[], int size) {
        int[] arr = new int[size];
        boolean isDuplicate;
        int indx = 0;

        for(int i = 0; i < size; i ++) {
            isDuplicate = false;
            
            for(int j = 0; j < size; j ++) {
                if (numbers[i] == arr[j]) {
                    isDuplicate = true;
                    break;
                }
            }

            if(!isDuplicate) {
                arr[indx] = numbers[i];
                indx ++;
            }
        }

        

        // output: 
        System.out.println("The array without duplicate elements = ");

        for(int i = 0; i < indx; i ++) {
            System.out.print(arr[i] + " ");
        }
    }
}

public class q2 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Solution sol = new Solution();

        System.out.print("Enter the number of elements you want in the array: ");
        int size = sc.nextInt();

        int[] arr = new int[size];

        for(int i = 0; i < size; i ++) {
            System.out.print(arr[i] + " = ");
            arr[i] = sc.nextInt();
        }

        sol.removeDuplicates(arr, size);

    }
}
