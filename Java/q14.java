// Write a Java Program to Check Whether a Number is Palindrome or Not

class Solution {
    public void check(int num) {
        if (num == 0) return;

        int n = num;

        int rem = 0;
        int sum = 0;

        while(n > 0) {
            rem = n % 10;
            sum = (sum * 10) + rem; 
            n = n / 10;
        }

        if(sum == num) {
            System.out.println("The entered number is Palindrome");
        } else {
            System.out.println("The entered number is not Palindrome");
        }
    }
}

public class q14 {
    public static void main(String[] args) {
        Solution sol = new Solution();

        sol.check(9889);
    }
}
