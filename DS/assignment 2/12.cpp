// Write a CPP program using switch case as below:
// 1. Create a circular Double linked list
// 2. Insert a node in the beginning
// 3. Insert a node in the end
// 4. Insert a node in the middle
// 5. Delete a node in the beginning
// 6. Delete a node in the end
// 7. Delete a node from the middle
// 8. Display Double circular linked list

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
            tail->next = head;
            head->prev = tail;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if(isEmpty()) {
            head = tail = newNode;
            tail->next = head;
            head->prev = tail;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        tail->next = head;
    }

    void push_middle(int val) {
        Node* newNode = new Node(val);

        if(isEmpty()) {
            head = tail = newNode;
            tail->next = head;
            head->prev = tail;
            return;
        }

        Node* slow = head;
        Node* fast = head;

        while(fast->next != head && fast->next->next != head) {
            slow = slow->next;
            fast = fast->next;
        }
        Node* prevPointer = slow->prev;

        prevPointer->next = newNode;
        newNode->prev = prevPointer;
        newNode->next = slow;
        slow->prev = newNode;
    }

    void pop_front() {
        if(isEmpty()) {
            cout << "Linked list is empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        head->prev = tail;
        tail->next = head;
        delete temp;
    }

    void pop_back() {
        if(isEmpty()) {
            cout << "Linked list is empty" << endl;
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        head->prev = tail;
        tail->next = head;
        delete temp;
    }

    void pop_middle() {
        if(isEmpty()) {
            cout << "Linked list is empty" << endl;
            return;
        }

        Node* slow = head;
        Node* fast = head;

        while(fast->next != head && fast->next->next != head) {
            slow = slow->next;
            fast = fast->next;
        }

        Node* prevPointer = slow->prev;
        Node* nextPointer = slow->next;
        prevPointer->next = nextPointer;
        nextPointer->prev = prevPointer;
        delete slow;
    }

    void printLL() {
        if(isEmpty()) {
            cout << "\n Linked list is empty" << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " <-> ";
            temp = temp->next;
        } while (temp != head);
        cout << "HEAD(circular)" << endl;
    }

    bool isEmpty() {
        return head == NULL;
    }
};

int main(){
    
    LinkedList myList;

    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.printLL();

    myList.push_front(5);
    myList.printLL();

    myList.push_middle(15); // should go between 10 and 20

    myList.printLL();

    cout<<endl;
    return 0;
}