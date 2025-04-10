// Write a Java program to calculate gross salary and net salary of an employee.
// Gross salary = Hourly rate * total number of hours worked
// Net salary = gross salary - tax (7.5%)
// Take values from users using Scanner class.
import java.util.Scanner;

class Solution {
    public void calculate(int hours, float rate) {
        double gross = hours * rate;
        System.out.println("Gross salary = " + gross);

        double tax = 0.075 * gross;

        System.out.println("The Net salary = " + (gross - tax));

    }
}

public class q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of hours you have worked: ");
        int hours = sc.nextInt();

        System.out.print("Enter hourly rate: ");
        float hourlyRate = sc.nextFloat();

        Solution sol = new Solution();

        sol.calculate(hours, hourlyRate);

        sc.close();
    }
}
