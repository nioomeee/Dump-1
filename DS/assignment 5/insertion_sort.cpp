#include<iostream>
using namespace std;

class Solution{
public:

    
};

int main(){
    
    int arr[] = {5, 2, 1, 8, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: " << endl;

    for(int i = 0; i < size; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 1; i < size; i ++) {
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    cout << "Sorted array: " << endl;

    for(int i = 0; i < size; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout<<endl;
    return 0;
}