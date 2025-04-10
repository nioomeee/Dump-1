// Write a Java Program that take user Year as input from user making use of
// JoptionPane class and check whether its leap year or not.
import javax.swing.JOptionPane;

public class q6 {
    public static void main(String[] args) {
        String yearString = JOptionPane.showInputDialog("Enter a year");

        int year = Integer.parseInt(yearString);

        if(year % 4 == 0 && year % 400 == 0) {
            JOptionPane.showMessageDialog(null, "It's a leap year");
        } else {
            JOptionPane.showMessageDialog(null, "It's not a leap year");
        }
    }
}
