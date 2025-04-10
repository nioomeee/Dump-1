// Write a Java program that will convert the given temperature in fahrenheit to
// celcius using the formula C=(F-32)/1.8

import java.util.Scanner;

class Solution {
    public void calculate(float far) {
        float cel = (far - 32) / 18;

        System.out.println("The temperature in celcius = " + cel);
    }
}

public class q2 {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter temperature in farenheit: ");
        float far = sc.nextFloat();

        Solution sol = new Solution();

        sol.calculate(far);

        sc.close();
    }
}