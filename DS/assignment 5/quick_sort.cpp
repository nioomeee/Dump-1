#include<iostream>
using namespace std;

class Solution{
public:
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int partition(int arr[], int start, int end) {
        // let's choose the last element as the pivot
        int pivot = arr[end];

        int i = start - 1; //small element tracker

        for(int j = 0; j < end; j ++) {
            if(arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[i+1], arr[end]);
        return (i+1); // index of pivot
    }

    void quickSort(int arr[], int start, int end) {
        if(start < end) {
            int pivot = partition(arr, start, end);

            quickSort(arr, start, pivot-1);
            quickSort(arr, pivot+1, end);
        }
    }


};

int main(){
    
    int arr[] = {5, 2, 1, 8, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Og array: " << endl;

    for(int i = 0; i < size; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Solution sol;
    sol.quickSort(arr, 0, size-1);

    cout << "Sorted arrY : " << endl;
    for(int i = 0; i < size; i ++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}