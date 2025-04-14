// Write a C Program to create a queue using an array and sort it
#include<iostream>
using namespace std;

class Queue{
public:
    int arr[10];
    int idx = -1;

    void push(int val) {
        if(idx >= 9) {
            cout << "Queue overflow!" << endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }

    void pop() {
        if(idx < 0) {
            cout << "Stack underflow!" << endl;
            return;
        }
        idx--;
    }

    void sortQueue() {
        if(idx < 0) {
            cout << "Stack underflow!" << endl;
            return;
        }
        int temp;
        for(int i = 0; i <= idx; i ++) {
            for(int j = i+1; j <= idx; j ++) {
                if(arr[j] < arr[i]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    void printQ() {
        if(idx < 0) {
            cout << "Stack underflow!" << endl;
            return;
        }

        for(int i = 0; i <= idx; i ++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    
    Queue q;
    q.push(5);
    q.push(25);
    q.push(13);
    q.push(89);
    q.push(21);

    q.printQ();

    q.sortQueue();
    q.printQ();
    cout<<endl;
    return 0;
}