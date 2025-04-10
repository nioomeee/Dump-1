// Write a Java program to create a Linkedlist and perform following operations on it:
// • add()
// • addAll()
// • AddFirst()
// • get()
// • lastIndexOf()

import java.util.*;

public class q16 {
    public static void main(String[] args) {
        LinkedList<String> ll = new LinkedList<>();

        ll.add("Apple");
        ll.add("Banana");
        ll.add("Orange");
        ll.add("Peach");
        ll.add("Mango");

        System.out.println("The linked list = " + ll);

        LinkedList<String> ll2 = new LinkedList<>();
        ll2.add("Kiwi");
        ll2.add("Grapes");

        ll.addAll(ll2);

        System.out.println("The linked list after adding all = " + ll);

        ll.add(0, "First");

        System.out.println("The linked list after adding first = " + ll);

        System.out.println("The element at index 3 = " + ll.get(3));

        System.out.println("The last index of peach = " + ll.lastIndexOf("Peach"));
        
    }
}
