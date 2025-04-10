// Write a Java program to create LinkedList and display them.

import java.util.LinkedList;

public class q12 {
    public static void main(String[] args) {
        LinkedList<String> list = new LinkedList<>();

        list.push("Apple");
        list.push("Banana");
        list.push("Orange");
        list.push("Peach");
        list.push("Mango");

        System.out.println("The libnked list = " + list);
    }
}
