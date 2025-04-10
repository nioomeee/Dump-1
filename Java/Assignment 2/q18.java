// Write a Java program to create a Priority Queue and perform following operations on it:
// • add()
// • peek()
// • poll()
// • contains()

import java.util.PriorityQueue;

public class q18 {
    public static void main(String[] args) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();

        pq.add(10);
        pq.add(5);
        pq.add(15);
        pq.add(2);
        pq.add(8);

        System.out.println("Priority Queue: " + pq);

        System.out.println("Peek (head): " + pq.peek());

        System.out.println("Poll (remove head): " + pq.poll());

        System.out.println("Priority Queue after poll: " + pq);

        System.out.println("Contains 15: " + pq.contains(15));
        System.out.println("Contains 2: " + pq.contains(2));
    }
}
