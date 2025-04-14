// Write a C Program to create a stack using a Linkedlist
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

    void push_front(int val) {
        Node* newNode = new Node(val);
        if(isEmpty()) {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void pop_front() {
        if(isEmpty()) {
            cout << "Linked list is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void print() {
        if(isEmpty()) {
            cout << "Linked list is empty" << endl;
            return;
        }
        cout << "Stack from top to bottom: " << endl;
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    bool isEmpty() {
        return head == NULL;
    }
};

class Stack {
public:
    LinkedList ll;

    void push(int val) {
        ll.push_front(val);
    }

    void pop() {
        ll.pop_front();
    }

    void peek() {
        cout<< "the peek of stack = " << ll.head->data;
    }

    void display() {
        ll.print();
    }
};

int main(){
    
    Stack stack;
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);
    
    stack.display();

    stack.pop();
    stack.display();

    stack.peek();
    cout<<endl;
    return 0;
}