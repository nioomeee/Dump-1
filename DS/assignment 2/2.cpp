// Write a CPP program using switch case as below:
// 1. Create a single linked list
// 2. Display single linked list
// 3. Delete the 3rd Node from the Linkedlist 
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
        head = NULL;
        tail = NULL;
    }

    // 1. insert into linked list
    void push(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
        }

        tail->next = newNode;
        tail = newNode;
    }

    // 2. display linked list
    void printLL() {

        if(head == NULL) {
            cout << "Linked list is empty";
            return;
        }
        Node* temp = head;

        cout << "Linked list: " << endl;
        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // 3. delete 3rd node from linked list
    void del() {
        if(head == NULL) {
            cout << "Linked list is Empty";
            return;
        }

        Node* temp = head;

        Node* prev = head;

        int count = 1;

        while(temp != NULL && count < 3) {
            prev = temp;
            temp = temp->next;
            count++;
        }

        if(temp == NULL) {
            cout << "Linked list has less than 3 nodes" << endl;
            return;
        }

        prev->next = temp->next;
        temp->next = NULL;
        delete temp;
        
    }
};

int main(){
    
    int choice, value;
    LinkedList ll;

    do {
        cout << "\n-------------- Menu --------------" << endl;
        cout << "1. insert into liked list" << endl;
        cout << "2. Display linked list" << endl;
        cout << "3. delete 3rd node from linked list"<< endl;
        cout<< "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter the value to insert: ";
                cin>> value;
                ll.push(value);
                break;

            case 2:
                ll.printLL();
                break;
            
            case 3:
                ll.del();
                break;

            case 4:
                cout << "Exiting..." << endl;

            default: 
                cout << "Wrong choice entered. Enter again!" << endl;
                break;
        }

    } while (choice != 4);

    cout<<endl;
    return 0;
}