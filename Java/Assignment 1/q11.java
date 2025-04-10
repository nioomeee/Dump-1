// Write a Java program to enter two numbers and find the smallest out of them.
// Use conditional operator.

class Solution {
    public int find(int num1, int num2) {
        return num1 > num2 ? num1 : num2;
    }
}

public class q11 {
    public static void main(String[] args) {
        Solution sol = new Solution();
        int max = sol.find(12, 5);
        System.out.println("Greater number = " + max);
    }
}
