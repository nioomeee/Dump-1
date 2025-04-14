// Write a CPP program using switch case as below:
// 1. Create a single linked list
// 2. Insert a node in the middle
// 3. Insert a node in the beginning
// 4. Insert a node in the end
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
        head = NULL;
        tail = NULL;
    }

    // 1. insert into linked list
    void push(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;

    }

    // 2. insert middle
    void insertMiddle(int val) {
        Node* newNode = new Node(val);
        
        if(head == NULL) {
            head = tail = newNode;
            return;
        }

        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        newNode->next = slow->next;
        slow->next = newNode;
    }

    // 3. insert in beginning
    void insertBeginning(int val) {

        Node* newNode = new Node(val);

        if(isEmpty()) {
            head = tail = newNode;
        }
        newNode->next = head->next;
        head = newNode;
    }

    // 4. display the LL
    void printLL() {
        if(isEmpty()) {
            cout << "\nLinked list is Empty" << endl;
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
        cout << "2. insert a node in middle linked list" << endl;
        cout << "3. insert a node in beginning linked list" << endl;
        cout << "4. insert a node in end linked list" << endl;
        cout << "5. Display linked list" << endl;
        cout << "6. Exit" << endl;
        cout<< "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\nEnter the value to insert: ";
                cin >> val;
                ll.push(val);
                break;

            case 2:
                cout << "\nEnter the value to insert: ";
                cin >> val;
                ll.insertMiddle(val);
                break;

            case 3: 
                cout << "\nEnter the value to insert: ";
                cin >> val;
                ll.insertBeginning(val);
                break;

            case 4:
                cout << "\nEnter the value to insert: ";
                cin >> val;
                ll.push(val);
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
    } while(choice != 6);
    cout<<endl;
    return 0;
}