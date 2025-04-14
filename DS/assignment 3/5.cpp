// Write a C Program to create circular queue using an array

#include<iostream>
using namespace std;

class circularQueue{
public:
    int arr[10];
    int front, rear;

    circularQueue() {
        front = rear = -1;
    }

    bool isFull() {
        return ((rear + 1) % 10 == front);
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(int val) {
        if(isFull()) {
            cout << "Queue full" << endl;
            return;
        }

        if(isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % 10;
        }

        arr[rear] = val;
    }

    void dequeue() {
        if(isEmpty()) {
            cout << "Queue empty" << endl;
            return;
        }

        front = (front + 1) % 10;
    }

    void display() {
        if(isEmpty()) {
            cout << "Queue empty" << endl;
            return;
        }
        
        cout << "Queue: " << endl;
        int temp = front;

        while(true) {
            cout << arr[temp] << " ";
            if (temp == rear) {
                break;
            }
            temp = (temp + 1) % 10;
        }
        cout << endl;
    }

    void peek() {
        if(!isEmpty()) {
            cout << "Front = " << arr[front] << endl;
        } else {
            cout << "Queue empty" << endl;
        }
    }
};

int main(){
    
    circularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.dequeue();

    q.enqueue(60);
    q.enqueue(70);

    q.display();

    q.dequeue();
    q.peek();
    q.display();
    
    cout<<endl;
    return 0;
}