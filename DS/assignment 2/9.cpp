// Write a CPP program using switch case as below:
// 1. Create a circular single linked list
// 2. Delete a node in the beginning
// 3. Delete a node in the end
// 4. Delete a node from the middle
// 5. Display single circular linked list
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

    // 2. delete node at beginning 
    void pop_front() {

        if(isEmpty()) {
            cout << "\n Linked list is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        tail->next = head;
        delete temp;
    }

    // 3. delete node from end 
    void pop_back() {

        if(isEmpty()) {
            cout << "\n Linked list is empty" << endl;
            return;
        }
        
        Node* prev = head;
        while(prev->next != tail) {
            prev = prev->next;
        }
        Node* temp = tail;
        tail = prev;
        tail->next = head;
        delete temp;
    }

    // 4. delet from middle
    void pop_middle() {
        if(isEmpty()) {
            cout << "Linked list is empty" << endl;
            return;
        }

        Node* slow = head;
        Node* fast = head;
        Node* prev;
        while(fast!= tail && fast->next != tail) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = slow->next;
        delete slow;
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

    ll.pop_middle();
    ll.printLL();

    ll.pop_back();
    ll.printLL();

    ll.pop_front();
    ll.printLL();

    cout << endl;
    return 0;
}