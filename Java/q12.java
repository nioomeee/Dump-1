// Write a Java Program to Find the Largest Number Among three Numbers
// Entered by User using nested if-else and if-else ladder.

class Solution {
    int calculate(int num1, int num2, int num3) {
        if(num1 > num2 && num1 > num3) {
            return num1;
        } else if(num2 > num1 && num2 > num3) {
            return num2;
        } else {
            return num3;
        }
    }
}

public class q12 {
    public static void main(String[] args) {
        Solution sol = new Solution();
        System.out.println("The biggest number = " + sol.calculate(6, 2, 7));
    }
}