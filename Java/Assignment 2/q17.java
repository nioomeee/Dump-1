// 17. Write a Java program to create a Stack and perform following operations on it:
// • Push()
// • Peep()
// • Pop()
// • Search()
import java.util.Stack;

public class q17 {
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();

        stack.push(10);
        stack.push(20);
        stack.push(30);
        stack.push(40);
        stack.push(50);

        System.out.println("The stack = " + stack);

        System.out.println("The top element = " + stack.peek());

        System.out.println("Popped element = " + stack.pop());

        System.out.println("The stack after pop = " + stack);

        System.out.println("The position of 20 = " + stack.search(20));
    }
}
