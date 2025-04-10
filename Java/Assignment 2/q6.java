// Write a Java program to create a two-dimensional array and sum all the diagonal elements
// of it.
import java.util.Scanner;

class Solution {
    public int Sum(int[][] arr) {
        int sum = 0;

        for(int i = 0; i < arr.length; i ++) {
            for(int j = 0; j < arr[i].length; j ++) {
                if(i == j) {
                    sum += arr[i][j];
                }
            }
        }

        return sum;
    }
}

public class q6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int rows = sc.nextInt();

        System.out.print("Enter number of cols: ");
        int cols = sc.nextInt();

        int arr[][] = new int[rows][cols];

        for(int i =  0; i < arr.length; i ++) {
            for(int j = 0; j < arr[i].length; j ++) {
                System.out.print("arr["+i+"]["+j+"] : ");
                arr[i][j] = sc.nextInt();
            }
        }

        System.out.println("The entered array is: ");
        for(int i =  0; i < arr.length; i ++) {
            for(int j = 0; j < arr[i].length; j ++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

        Solution sol = new Solution();

        System.out.println("The sum of all the diagonal elements = " + sol.Sum(arr));

    }
}
