// Write a Java Program that calculate area of triangle using Constructor. Also
// find area of rectangle using Constructor Overloading.

class Solution {
    int base, height;
    float length, breadth;

    public Solution(int b, int h) {
        base = b;
        height = h;
    }

    public Solution(float l, float b) {
        length = l;
        breadth = b;
    }

    public void areaOfTriangle() {
        double area = 0.5 * base * height;
        System.out.println("Area of triangle = " + area);
    }

    public void areaOfRectangle() {
        double area = length * breadth;
        System.out.println("Area of rectangle = " + area);
    }
}

public class q9 {
    public static void main(String[] args) {
        Solution sol1 = new Solution(10, 20);
        Solution sol2 = new Solution(10.5f, 20.5f);

        sol1.areaOfTriangle();
        sol2.areaOfRectangle();
    }
}
