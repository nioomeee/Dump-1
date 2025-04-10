// Write a Java program to search an element in an array. (Note: using user-defined function)

import java.util.Scanner;
// import java.util.Arrays;

public class q9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = {2, 9, 45, 63, 21, 18};

        System.out.println("The array is: ");

        for(int i = 0; i < arr.length; i ++) {
            System.out.print(arr[i] + " ");
        }

        System.out.print("\nEnter the element you want to search in the array: ");
        int targ = sc.nextInt();

        boolean found = false;

        // user defined function
        for(int i = 0; i < arr.length; i ++) {
            if(targ == arr[i]) {
                found = true;
                break;
            }
        }

        // predefined function 
        // Arrays.binarySearch(arr, targ);
        
        if(found) {
            System.out.println("Target element " + targ + " found in the array");
        } else {
            System.out.println("Target element " + targ + " not found in the array");
        }

        System.out.println();
        sc.close();



    }
}
