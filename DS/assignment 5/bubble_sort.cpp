#include<iostream>
using namespace std;

class Solution{
public:

    void sort(int arr[], int size) {
        int temp;

        for(int i = 0; i < size; i ++) {
            for(int j = i+1; j < size; j ++) {
                if(arr[j] < arr[i]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        cout << "Sorted array: " << endl;

        for(int i = 0; i < size; i ++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } 
};

int main(){
    
    int arr[] = {5, 2, 1, 8, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    Solution sol;

    sol.sort(arr, size);
    cout<<endl;
    return 0;
}