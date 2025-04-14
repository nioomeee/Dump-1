// Write a CPP program using switch case as below:
// 1. Create a single linked list (Sorted Linked List)
// 2. Display single linked list
// 3. Remove the duplicate value (if any) 
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
    Node* head;

public: 
    LinkedList() {
        head = NULL;
    }

    // 1. insert in sorted manner
    void insertSorted(int val) {
        Node* newNode = new Node(val);
        
        if(head == NULL || val < head->data) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL && temp->next->data < val) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // 2. display linked list
    void display() {
        if(head == NULL) {
            cout << "Linked list is empty" << endl;
            return;
        }

        cout << "Linked list: " << endl;
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // 3. remove duplicates
    void removeDuplicates() {
        if (head == NULL) {
            cout << "the linked list is empty" << endl;
            return;
        }

        Node* curr = head;
        while(curr->next != NULL) {
            if(curr->data == curr->next->data) {
                Node* duplicate = curr->next;
                curr->next = curr->next->next;
                delete duplicate;
            } else {
                curr = curr->next;
            }
        }
    }

};

int main(){
    
    int op, val;
    LinkedList list;
    do {
        cout << "------Menu-------" << endl;
        cout << "1. Insert into sorted linked list" << endl;
        cout << "2. Display sorted linked list" << endl;
        cout << "3. Remove the duplicate values" << endl;
        cout << "4. exit" << endl;

        cout << "Enter your choice: ";
        cin >> op;

        switch(op) {
            case 1:
                cout << "Entet value to insert: ";
                cin >> val;
                list.insertSorted(val);
                break;
            
            case 2:
                list.display();
                break;

            case 3: 
                list.removeDuplicates();
                break;

            case 4:
                cout << "Exiting ..." << endl;
                break;
            
            default:
                cout << "Invalid coice. Try again!" << endl;
        }

    } while (op != 4);

    cout<<endl;
    return 0;
}