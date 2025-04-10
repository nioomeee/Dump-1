// Create a stack with 5 elements and find the minimum value out of it.

import java.util.Stack;

public class q13 {
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();

        stack.push(21);
        stack.push(13);
        stack.push(10);
        stack.push(6);
        stack.push(16);

        System.out.println("the stack = " + stack);

        int min = stack.get(0);
    
        for(int el : stack) {
            if (el < min) {
                min = el;
            }
        }

        System.out.println("The minimum value from the stack = " + min);
    }
}
