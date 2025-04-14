// Write a C Program to create a queue using Linkedlist.

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
public:

    Node* head;
    Node* tail;

    LinkedList() {
        head = tail = NULL;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop_front() {
        if(head == NULL) {
            cout << "\nLinked list is empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void printLL() {
        if(head == NULL) {
            cout << "\nLinked list is empty" << endl;
            return;
        }

        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

class Queue {
public:
    LinkedList ll;

    void enqueue(int val) {
        ll.push_back(val);
    }

    void dequeue() {
        ll.pop_front();
    }

    void front() {
        cout << "the front = " << ll.head->data << endl;
    }

    void display() {
        ll.printLL();
    }
};

int main(){
    
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.display();

    q.front();

    q.dequeue();
    q.display();

    cout<<endl;
    return 0;
}