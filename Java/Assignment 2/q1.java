// Write a Java Program to create an array with 10 elements and find Smallest Number from
// it.

class Solution {
    // in the function you have to specify square braces for the array
    int findSmallest(int numbers[]) {
        int smallest = numbers[0];

        for(int num : numbers) {
            if(num < smallest) {
                smallest = num;
            }
        }

        return smallest;
    }
}

public class q1 {
    public static void main(String[] args) {
        int numbers[] = {5, 0, 1, 5, 6, 8, 9, 16};
        Solution sol = new Solution();

        // to pass an array to a function - you just have to write it's name 
        System.out.println("The smallest number from the array = " + sol.findSmallest(numbers)); 
    }
}
