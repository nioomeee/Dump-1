// Write a Java Program that will accept a number from the user and calculate
// its square and cube and display the same.
import java.util.Scanner;

class Solution {
    public void calculate(int n) {
        double sq = Math.pow(n, 2);
        double cube = Math.pow(n, 3);
        System.out.println("The square of " + n + " = " + sq);
        System.out.println("The cube of " + n + " = " + cube);
    }
}

public class q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int n = sc.nextInt();

        Solution sol = new Solution();

        sol.calculate(n);

        sc.close();
    }
}
