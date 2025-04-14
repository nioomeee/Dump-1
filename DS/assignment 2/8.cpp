// Write a CPP program using switch case as below:
// 1. Create a circular single linked list
// 2. Insert a node in the beginning
// 3. Insert a node in the end
// 4. Insert a node in the middle
// 5. Display circular linked list
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

    // 1. create a circular LL
    void create() {
        push_back(4);
        push_back(5);
        push_back(6);
        push_back(7);
        push_back(8);
    }

    // 3. insert node at the end
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

    // 2. insert at beginning 
    void push_front(int val) {
        Node* newNode = new Node(val);

        if(isEmpty()) {
            head = tail = newNode;
            tail->next = head;
            return;
        }

        newNode->next = head;
        head = newNode;
        tail->next = head;
    }

    // 4. insert in middle
    void push_middle(int val) {
        Node* newNode = new Node(val);

        if(isEmpty()) {
            head = tail = newNode;
            tail->next = head;
            return;
        }

        Node* slow = head;
        Node* fast = head;

        while(fast->next != tail && fast->next->next != tail) {
            slow = slow->next;
            fast = fast->next->next;
        }
        newNode->next = slow->next;
        slow->next = newNode;
    }
    
    // 5. display LL
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

    bool isEmpty() {
        return head == NULL;
    }
};

int main() {

    LinkedList ll;
    ll.create();
    ll.printLL();
    ll.push_front(51);
    ll.printLL();
    ll.push_back(96);
    ll.printLL();
    ll.push_middle(512);
    ll.printLL();
    cout << endl;
    return 0;
}