#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {5, 2, 1, 8, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Og array: " << endl;

    for(int i = 0; i < size; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int temp;
    for(int i = 0; i < size-1; i ++) {
        int si = i; // smallest index
        for(int j = i+1; j < size; j ++) {
            if(arr[j] < arr[si]) {
                si = j;
            }
        }
        temp = arr[si];
        arr[si] = arr[i];
        arr[i] = temp;
    }

    cout << "Sorted array: " << endl;
    for(int i = 0; i < size; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout<<endl;
    return 0;
}