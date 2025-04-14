// Write a C Program to create a Stack using an array with 10 elements and find the ODD
// numbers out of it and print it.
#include<iostream>
using namespace std;

class Stack{
public:
    int idx = -1;
    int arr[10];

    void push(int val) {
        if(idx >= 9) {
            cout << "Stack overflow!";
            return;
        }
        idx++;
        arr[idx] = val;
    }

    void pop() {
        if(idx < 0) {
            cout << "Array too small" << endl;
            return;
        }

        idx--;
    }

    void printOdd() {
        if(idx < 0) {
            cout << "Stack underflow" << endl;
            return;
        }

        cout << "Odd numbers in the stack: " << endl;
        for(int i = idx; i >= 0; i --) {
            if(arr[i] % 2 != 0) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }

    void print() {
        if(idx < 0) {
            cout << "Stack underflow" << endl;
            return;
        }

        cout << "Stack: " << endl;
        for(int i = idx; i >= 0; i --) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.print();
    stack.printOdd();

    stack.pop();
    stack.print();
    stack.printOdd();

    cout<<endl;
    return 0;
}