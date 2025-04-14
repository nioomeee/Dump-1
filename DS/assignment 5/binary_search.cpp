#include<iostream>
using namespace std;

class Solution{
public:
    int binarySearch(int arr[], int target, int size) {
        int start = 0; 
        int end = size - 1;

        while(start < end) {
            int mid = (start + end) / 2;
            if(target == arr[mid]) {
                return mid;
            } else if(target < arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return -1;
    }
};

int main(){
    
    
    cout<<endl;
    return 0;
}