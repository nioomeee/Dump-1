// Create a Priority queue with 10 elements and print the minimum value out of it.

import java.util.PriorityQueue;

public class q14 {
    public static void main(String[] args) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        pq.add(16);
        pq.add(13);
        pq.add(18);
        pq.add(11);
        pq.add(20);

        System.out.println("Queue = " + pq);

        System.out.println("The minimum value out of priority queue = " + pq.peek()); 
        // in a priority queue elements get arranged in ascending order only 
    }
}
