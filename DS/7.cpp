// Write a CPP program to create a matrix and check whether that matrix is diagnol matrix
// or not.
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
        cout << "Entered rows and columns can't be different" << endl;
        return 1;
    }

    int matrix[rows][columns];

    cout << "For inputting all the elements: "<<endl;

    int count = 0;
    for(int i = 0; i < rows; i ++) {
        for(int j = 0; j < columns; j ++) {
            cout << "matrix[" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < rows; i ++) {
        for(int j = 0; j < columns; j ++) {
            if(i != j && matrix[i][j] != 0) {
                cout << "It's not a diagonal matrix" << endl;
                return 1;
            } else if (i == j && matrix[i][j] == 0) {
                cout << "\n It's not a diagonal matrix " << endl;
                return 1;
            }
        }
    }

    cout << "It's a diagonal matrix" << endl;

    cout<<endl;
    return 0;
}