// Write a CPP program to sum all the elements of the single Circular Linked list
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
        if(isEmpty()) {
            head = tail = newNode;
            tail->next = head;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }

   
    // display LL
    void printLL() {

        if(isEmpty()) {
            cout << "Linked list is empty" << endl;
            return;
        }

        Node* temp = head;

        while(temp != tail) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "LOOP" << endl;
    }

    // sum of elements of circular LL
    int add() {
        if(isEmpty()) {
            cout << "Linked list is empty" << endl;
            return 0;
        }

        Node* temp = head;
        int sum = 0;

        while(temp != tail) {
            sum += temp->data;
            temp = temp->next;
        }
        return sum;
    }

    bool isEmpty() {
        return head == NULL;
    }
};

int main() {

    LinkedList ll;
    ll.push_back(5);
    ll.push_back(10);
    ll.push_back(15);
    ll.push_back(20);
    ll.push_back(0);
    ll.push_back(0);
    ll.printLL();

    cout << "Sum of all elements = " << ll.add();

    cout << endl;
    return 0;
}