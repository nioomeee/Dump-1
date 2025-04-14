// Write a CPP program using switch case as below:
// 1. Create a double linked list
// 2. Insert a node in the ending
// 3. Insert a node in the beginning
// 4. Insert a node in the middle
// 5. Display double linked list

#include<iostream>
using namespace std;

class Node{
public:

    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }

};

class LinkedList {
public:

    Node* head;
    Node* tail;

    LinkedList() {
        head = tail = NULL;
    }

    // 1. create a doubly linked list
    void createLL() {
        push_back(1);
        push_back(2);
        push_back(3);
        push_back(4);
        push_back(5);
    }

    // 2. insert node at ending
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

    // 3. insert node at beginning
    void push_front(int val) {
        Node* newNode = new Node(val);

        if(isEmpty()) {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    // 4. insert at middle
    void push_middle(int val){
        Node* newNode = new Node(val);

        if(isEmpty()) {
            head = tail = newNode;
            return;
        }
        Node* fast = head;
        Node* slow = head;

        while(fast != NULL && fast->next != NULL) {
            slow = fast;
            fast = fast->next->next;
        }

        Node* prevNode = slow->prev;
        newNode->next = slow;
        newNode->prev = prevNode;

        if(prevNode != NULL) {
            prevNode->next = newNode;
        } else {
            head = newNode;
        }
        slow->prev = newNode;

    }

    // 5. display LL
    void printLL() {
        if(isEmpty()) {
            cout << "\n Linked list is empty" << endl;
            return;
        }

        Node* temp = head;

        cout << "Linked list : " << endl;
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
    
    int choice, val;
    LinkedList ll;

    do {
        cout << "\n-------------- Menu --------------" << endl;
        cout << "1. insert into linked list" << endl;
        cout << "2. insert a node at ending" << endl;
        cout << "3. insert a node in beginning" << endl;
        cout << "4. insert a node at middle" << endl;
        cout << "5. Display linked list" << endl;
        cout << "6. Exit" << endl;
        cout<< "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\nEnter the value to insert: ";
                ll.createLL();
                break;

            case 2:
                cout << "\nEnter the value to insert: ";
                cin >> val;
                ll.push_back(val);
                break;

            case 3: 
                cout << "\nEnter the value to insert: ";
                cin >> val;
                ll.push_front(val);
                break;

            case 4:
                cout << "\nEnter the value to insert: ";
                cin >> val;
                ll.push_middle(val);
                break;

            case 5:
                ll.printLL();
                break;

            case 6:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Wrong choice entered. Try again" << endl;
                break;
        }
    }while(choice != 6);
    cout<<endl;
    return 0;
}