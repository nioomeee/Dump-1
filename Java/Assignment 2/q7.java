// Write a Java Program to create an array containing marks of all students in physics using
// a for-each loop.
import java.util.Scanner;
public class q7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[10];

        for(int i = 0; i < 10; i ++) {
            System.out.print("arr["+i+"] : ");
            arr[i] = sc.nextInt();
        }

        System.out.println("The entered marks are: ");
        for(int el : arr) {
            System.out.print(el + " ");
        }
        System.out.println();
        sc.close();
    }
}
