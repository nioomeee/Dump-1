// Write a Java program to sort array elements in desending order.

public class q8 {
    public static void main(String[] args) {
        int []arr = {5, 2, 8, 1, 9, 12, 11, 18, 3};

        for(int i = 0; i < arr.length; i ++) {
            for(int j = i+1; j < arr.length; j ++) {
                if (arr[j] > arr[i]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        System.out.println("The sorted array in descending order: ");

        for(int i = 0; i < arr.length; i ++) {
            System.out.print(arr[i] + " ");
        }

        System.out.println();
    }
}
