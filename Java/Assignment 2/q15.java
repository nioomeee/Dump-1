// Write a Java program to create an Arraylist with 5 elements and perform following
// operations on it:
// • get()
// • contains()
// • remove()
// • sort()

import java.util.*;

public class q15 {
    public static void main(String[] args) {
        ArrayList<Integer> arrlist = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        
        arrlist.add(5);
        arrlist.add(2);
        arrlist.add(9);
        arrlist.add(8);
        arrlist.add(3);

        System.out.println("All the elements from the ll = " + arrlist);
        System.out.print("Enter the index to fetch the element: ");
        int indx = sc.nextInt();

        System.out.println("the elemet at index " + indx + " = " + arrlist.get(indx));

        System.out.print("Enter the element to check existence: ");
        int elem = sc.nextInt();

        System.out.println("The answer = " + arrlist.contains(elem));

        System.out.println("Removing "+ arrlist.remove(3));

        System.out.println("The arraylist after removing the element = " + arrlist);

        Collections.sort(arrlist);

        System.out.println("Sorted array list = " + arrlist);
        
    }
}
