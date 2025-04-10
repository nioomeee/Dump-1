// Create a class Admin with Id, enrollnment no and name. Create two methods named
// input()
// and display(). Create 5 objects of that class and print all the values of it.
// Note: use Array of Object concept
import java.util.Scanner;

class Admin {
    int id;
    String enroll;
    String name;

    public void Input(int id, String enroll, String name) {
        this.id = id;
        this.enroll = enroll;
        this.name = name;
    }

    public void Display() {
        System.out.println("The id  = " +id);
        System.out.println("The enrollment  = " +enroll);
        System.out.println("The name  = " +name);
    }
}

public class q11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Admin admins[] = new Admin[5];

        for(int i = 0; i < 5; i ++) {
            admins[i] = new Admin(); // very imp to create this object

            System.out.print("Enter the id = ");
            int id = sc.nextInt();
            sc.nextLine(); // also very imp to clean up the next line 

            System.out.print("Enter the enrollment number = ");
            String enroll = sc.nextLine();

            System.out.print("Enter the Name = ");
            String name = sc.nextLine();

            admins[i].Input(id, enroll, name);

            System.out.println("\nFor admin " + i+1);
            admins[i].Display();

            System.out.println();
        }

        sc.close();
    }
}