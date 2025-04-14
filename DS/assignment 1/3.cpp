// Write a CPP program to create two dimensional array, pass that array to a user defined
// function and print it.

#include<iostream>
using namespace std;

class Solution {
public:
    void print(int matrix[][100], int rows, int cols) {
        cout << "Printing the matrix: " << endl;

        for(int i = 0; i < rows; i ++) {
            for(int j = 0; j < cols; j ++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {

    int rows, cols;

    cout << "Enter the number of rows(max 100): ";
    cin >> rows;

    cout << "ENter the number of columns(max 100): ";
    cin >> cols;

    int matrix[100][100];

    if(rows > 100 || cols > 100) {
        cout << "Sorry! max size has to 100!" << endl;
        return 1;

    }

    cout << "Input the values for the array: " << endl;

    for(int i = 0; i < rows; i ++) {
        for(int j = 0; j < cols; j ++) {
            cout << "matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    Solution sol;
    
    sol.print(matrix, rows, cols);

    cout << endl;
    return 0;
}