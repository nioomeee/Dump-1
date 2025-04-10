// Write a Java program that will convert length in feet to centimeters using
// copy constructor. And print both the values. [before conversion and after
// conversion]
class Solution {
    float feet, cm;

    public Solution (float f) {
        feet = f;
        cm = f * 30.48f;
    }

    public Solution(Solution sol) {
        feet = sol.feet;
        cm = sol.feet * 30.48f;
    }

    public void display() {
        System.out.println("In cm = " + cm);
        System.out.println("Feet = " + feet);
    }
}

public class q10 {
    public static void main(String[] args) {
        Solution sol = new Solution(5);
        Solution sol2 = new Solution(sol);

        System.out.println("Using normal constructor");
        sol.display();

        System.out.println("Using copy constructor");
        sol2.display();
    }
}
