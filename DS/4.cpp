// Write a CPP program to create a class named Student with data : No, Name and
// Addresss.
// Create 3 objects of Student structure. Get the value of structure variable from user and
// print it.

#include<iostream>
using namespace std;

class Student{

    int no;
    string name;
    string address;
public:
    void getValues(int a, string b, string c) {
        no = a;
        name = b;
        address = c;
    }

    void printValues() {
        cout << "Name = " << name << endl;
        cout << "Number = " << no << endl;
        cout << "Address = " << address << endl;
    }
};

int main(){
    
    Student students[3];

    int no;
    string name;
    string address;

    for(int i = 0; i < 3; i ++) {
        cout << "\nFor student " << i+1 << " : " << endl;

        cout << "Enter your no: ";
        cin >> no;
        cin.ignore();

        cout << "Enter your name: ";
        getline(cin, name);

        cout << "ENter yout address: ";
        getline(cin, address);

        students[i].getValues(no, name, address);

        cout << endl;
    }

    cout << "\nprinting back all the values: " << endl; 
    for(int i = 0; i < 3; i ++) {
        cout << "\nFor student " << i+1 << " : " << endl;

        students[i].printValues();
        cout << endl;
    }
    cout<<endl;
    return 0;
}