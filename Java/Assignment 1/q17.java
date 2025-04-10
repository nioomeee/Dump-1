// Write a Java Program to display all prime odd numbers from 50 to 100.

class Solution {
    public void display() {
        
        for(int i = 50; i <= 100; i ++) {
            if(i % 2 == 1) { // for checking if it's odd
                if(isPrime(i)){ // checking if it's prime
                    System.out.print(i + " ");
                }
            } 
        }
    }

    boolean isPrime(int num) {
        for(int i = 2; i < num / 2; i ++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}

public class q17 {
    public static void main(String[] args) {
        Solution sol = new Solution();

        sol.display();
    }
}
