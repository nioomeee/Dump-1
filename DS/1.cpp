// Write a CPP program to create a matrix and check whether that matrix is Sparse matrix or
// not.
#include<iostream>
using namespace std;

class Solution{
public:

};

int main(){
    
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> columns;

    int matrix[rows][columns];

    cout << "For inputting all the elements: "<<endl;

    for(int i = 0; i < rows; i ++) {
        for(int j = 0; j < columns; j ++) {
            cout << "matrix[" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
        }
    }

    int size = rows * columns;
    int count = 0;
    for(int i = 0; i < rows; i ++) {
        for(int j = 0; j < columns; j ++) {
            if(matrix[i][j] == 0) {
                count ++;
            }
        }
    }

    if(count >= (size / 2)) {
        cout << "It's a sparse matrix" << endl;
    } else {
        cout << "It's not a sparse matrix" << endl;
    }
    cout<<endl;
    return 0;
}