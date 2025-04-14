// Write a CPP program using switch case as below:
// 1. Create a double linked list
// 2. Delete a node from the begining
// 3. Delete a node from the end
// 4. Delete a node in the middle
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

    // insert node at ending
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

    // 2. delete node from beginning
    void pop_front() {
        
        if(isEmpty()) {
            cout << "Linked list is empty" << endl;
            return;
        }

        Node* temp = head;
        head->next->prev = head;
        head = head->next;
        delete temp;
    }

    // 3. delete node from end
    void pop_back() {
        
        if(isEmpty()) {
            cout << "Linked list is empty" << endl;
            return;
        }
        Node* prevPointer = tail->prev;
        prevPointer->next = NULL;
        tail->prev = NULL;
        delete tail;
        tail = prevPointer;
    }

    // 4. delete node from middle
    void pop_middle(){

        if(isEmpty()) {
            cout << "\n Linked list is empty" << endl;
            return;
        }

        Node* fast = head;
        Node* slow = head;

        while(fast != NULL && fast->next != NULL) {
            slow = fast;
            fast = fast->next->next;
        }

        Node* prevNode = slow->prev;
        Node* nextNode = slow->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;
        delete slow;

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
        cout << "1. create a linked list" << endl;
        cout << "2. delete node from beginning" << endl;
        cout << "3. delet node from end" << endl;
        cout << "4. delete node from middle" << endl;
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
                ll.pop_front();
                break;

            case 3: 
                
                ll.pop_back();
                break;

            case 4:
                ll.pop_middle();
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