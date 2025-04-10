// Write a Java Program to create add function to sum all the elements.
// Note: use Variable length argument concept


public class q10 {
    public static void main(String[] args) {
        System.out.println("Sum of elements " + add(1, 2, 4, 5, 8));
        System.out.println("Sum of elements " + add(1, 2));
        System.out.println("Sum of elements " + add(100, 200, 400, 500, 800));
        System.out.println("Sum of elements " + add(89, 56, 12, 10, 0));
    }

    public static int add(int ...nums) {
        int sum = 0;
        for(int num : nums) {
            sum += num;
        }
        return sum;
    }
}
