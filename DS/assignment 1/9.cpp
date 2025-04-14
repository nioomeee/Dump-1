// Write a CPP program to create a Matrix and print lower Triangular.
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

    if(rows != columns) {
        cout << "Square matrix required! " << endl;
        return 1;
    }

    int matrix[rows][columns];

    cout << "For inputting all the elements: "<<endl;

    for(int i = 0; i < rows; i ++) {
        for(int j = 0; j < columns; j ++) {
            cout << "matrix[" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
        }
    }

    cout << "Printing the lower traingular elements of it: " << endl;
    for(int i = 0; i < rows; i ++) {
        for(int j = 0; j < columns; j ++) {
            if(i >= j) {
                cout << matrix[i][j] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    cout<<endl;
    return 0;
}
