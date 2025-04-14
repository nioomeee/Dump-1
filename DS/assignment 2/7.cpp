// Write a CPP program to count the length of the Double Linkedlist.
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
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
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    int length() {

        if(isEmpty()) {
            cout << "\n The linked list is empty" << endl;
            return 0;
        }
        Node* temp = head;
        int count = 0;
        while(temp != NULL) {
            count ++;
            temp = temp->next;
        }
        return count;
    }

    void printLL() {

        if(isEmpty()) {
            cout << "\n The linked list is empty" << endl;
            return;
        }
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    bool isEmpty() {
        return head == NULL;
    }
};

int main(){
    
    LinkedList ll;
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.push_back(8);
    ll.push_back(9);

    cout << "linked list: " << endl;
    ll.printLL();

    cout << "The length of the doubly linked list = " << ll.length() << endl;
    
    cout<<endl;
    return 0;
}