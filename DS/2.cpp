// Write a CPP program to create a single dimensional array, pass that array to a user
// defined function and print it.

#include<iostream>
using namespace std;

class Solution{
public:
    void printArray(int arr[], int size) {
        
        cout << "The array: " << endl;
        for(int i = 0; i < size; i ++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){

    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    for(int i = 0; i < size; i ++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    Solution sol;
    sol.printArray(arr, size);
    cout<<endl;
    return 0;
}