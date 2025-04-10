// Write a Java Program that will ask the user to input one number and check
// whether its prime number or not using Constructor.
class Solution {

    int num;
    public Solution(int n) {
        num = n;
    }

    public void primeCheck() {
        for(int i = 2; i < num / 2; i ++) {
            if(num % i == 0) {
                System.out.println("The number is not prime");
                return;
            }
        }

        System.out.println("The number is prime");
        return;
    }

}

public class q8 {
    public static void main(String[] args) {
        Solution sol = new Solution(13);

        sol.primeCheck();

    }
}
