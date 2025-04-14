// Write a CPP program that will display an array in reverse order
#include<iostream>
using namespace std;

int main(){
    
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "\nInput all the values: "<< endl;

    for(int i = 0; i < size; i ++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "\n Printing the lst in reverse order: " << endl;
    
    for(int i = size-1; i >= 0; i --) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<endl;
    return 0;
}