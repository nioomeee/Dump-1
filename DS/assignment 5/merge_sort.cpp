#include<iostream>
using namespace std;

class Solution{
public:
    void merge(int arr[], int start, int mid, int end) {
        int left_size = mid - start + 1;
        int right_size = end - mid;

        int left[left_size], right[right_size]; //temporary left and right halves arrays

        // copying data into these temporary arrays
        for(int i = 0; i < left_size; i ++) {
            left[i] = arr[start + i];
        }

        for(int i = 0; i < right_size; i ++) {
            right[i] = arr[mid + 1 + i];
        }

        // merging left and right arrays back into original array
        int  i = 0, j = 0, k = start;
        while(i < left_size && j < right_size) {
            if(left[i] < right[j]) {
                arr[k] = left[i];
                i ++;
            } else {
                arr[k] = right[j];
                j ++;
            }
            k++;
        }

        // copy remaining elements of the left array
        while(i < left_size) {
            arr[k] = left[i];
            k++;
            i++;
        }

         // copy remaining elements of the right array
        while(j < right_size) {
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    void merge_sort(int arr[], int start, int end) {
        if (start >= end) return;

        int mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid+1, end);

        merge(arr, start, mid, end);
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
    sol.merge_sort(arr, 0, size-1);

    cout << "Sorted array: " << endl;
    for(int i = 0; i < size; i ++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout<<endl;
    return 0;
}