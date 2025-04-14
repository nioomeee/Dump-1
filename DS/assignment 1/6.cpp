// Write a CPP program to represent sparse matrix in Triplet Representation
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

    int count = 0;
    for(int i = 0; i < rows; i ++) {
        for(int j = 0; j < columns; j ++) {
            cout << "matrix[" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
            if(matrix[i][j] == 0) {
                count ++;
            }
        }
    }

    if(count < (rows * columns) / 2) {
        cout << "The entered matrix isn't a sparse matrix" << endl;
        return 1;
    }

    cout << "\nTriplet representation(row, column, value): " << endl;

    for(int i = 0; i < rows; i ++) {
        for(int j = 0; j < columns; j ++) {
            if(matrix[i][j] != 0) {
                cout << i << " " << j << " " << matrix[i][j] << endl;
            }
        }
    }

    cout<<endl;
    return 0;
}