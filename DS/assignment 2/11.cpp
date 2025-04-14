// Write a CPP program to print all the elements of Single Linkedlist in sorted Order.
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

    void push_back(int val) {
        Node* newNode = new Node(val);
        if(isEmpty()) {
            head = tail = newNode;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void sortLL() {
        if(head == NULL || head->next == NULL) return;

        bool madeSwap;

        do{ 
            madeSwap = false;
            Node* curr = head;

            while(curr->next != NULL) {
                if(curr->data > curr->next->data) {
                    int temp = curr->data;
                    curr->data = curr->next->data;
                    curr->next->data = temp;
                    madeSwap = true;
                }
                curr = curr->next;
            }

        } while(madeSwap);
    }
    
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
    
    LinkedList ll;
    ll.push_back(5);
    ll.push_back(14);
    ll.push_back(30);
    ll.push_back(12);
    ll.push_back(6);
    ll.printLL();

    ll.sortLL();
    ll.printLL();
    
    cout<<endl;
    return 0;
}