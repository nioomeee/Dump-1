// Write a Java Program that take one number from user making use of
// JoptionPane class, pass it to the parameterised Constructor and check
// whether its Odd number or Even number.

import javax.swing.JOptionPane;

class Solution {
    int num;
    public Solution(int num) {
        num = this.num;
    }

    public int Check() {
        if(num == 0) {
            return 0;
        } else if (num % 2 == 0) {
            return 2;
        } else {
            return 1;
        }
    }
}

public class q7 {
    public static void main(String[] args) {
        String numbString = JOptionPane.showInputDialog("Enter a number: ");
        int num = Integer.parseInt(numbString);

        Solution sol = new Solution(num);
        
        int check = sol.Check();

        if(check == 2) {
           JOptionPane.showMessageDialog(null, "the number is even");
        } else if (check == 0) {
            JOptionPane.showMessageDialog(null, "the number is 0");
        } else {
            JOptionPane.showMessageDialog(null, "the number is odd");
        }
    }
}
