// Write a CPP program using switch case as below:
// 1. Create a single linked list
// 2. Delete a particular node having value entered by user
// 3. Delete the first node
// 4. Delete the last node
// 5. Display single linked list

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

    // 1. insert into linked list
    void push(int val) {
        Node* newNode = new Node(val);

        if(isEmpty()) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;

    }

    // 2. delete node having value entered by user
    void delNode(int val) {
        
        if(isEmpty()) {
            cout << "Linked list is empty" << endl;
            return;
        }

        Node* temp = head;
        Node* prev = head;

        while(temp != NULL) {

            if(temp->data == val && temp == head) {
                pop_front();
                return;
            } else if(temp->data == val && temp == tail) {
                pop_back();
                return;
            } else if(temp->data == val) {
                prev->next = temp->next;
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
        cout << "Value not found" << endl;
    }

    // 3. delete 1st node
    void pop_front() {
        if(isEmpty()) {
            cout << "Linked list is Empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // 4. delete last node
    void pop_back() {
        if(isEmpty()) {
            cout << "Linked list is Empty" << endl;
            return;
        }
        Node* temp = head;
        while(temp->next != tail) {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    // 5. display ll
    void printLL() {
        if(isEmpty()) {
            cout << "Linked list is empty" << endl;
            return;
        }

        Node* temp = head;

        cout << "\n Linked list: " << endl;
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

int main(){
    
    int choice, val;
    LinkedList ll;

    do {
        cout << "\n-------------- Menu --------------" << endl;
        cout << "1. insert into linked list" << endl;
        cout << "2. delete a particular node with value" << endl;
        cout << "3. delete 1st node" << endl;
        cout << "4. delete last node" << endl;
        cout << "5. Display linked list" << endl;
        cout << "6. Exit" << endl;
        cout<< "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\nEnter value: ";
                cin >> val;
                ll.push(val);
                break;

            case 2:
                cout << "\nEnter value: ";
                cin >> val;
                ll.delNode(val);
                break;

            case 3:
                ll.pop_front();
                cout << endl;
                break;
            
            case 4: 
                ll.pop_back();
                cout << endl;
                break;

            case 5:
                ll.printLL();
                break;
                
            case 6:
                cout << "\n Exiting..." << endl;
                break;

            default:
                cout << "\n Wrong choice entered!" << endl;
                break;
        }
    } while(choice != 6);
    
    cout<<endl;
    return 0;
}