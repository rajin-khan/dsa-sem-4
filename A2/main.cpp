#include"linkedList.cpp"
#include<iostream>

using namespace std;

int main() {

    linkedList<int> l1; //linked list initialized

    int input;
    int inputSize;

    //insertion at beginning
    cout << "\nEnter the number of items you would like to enter into the Linked List: ";
    cin >> inputSize;

    cout << "Enter your items (each item is inserted at the beginning): ";
    for (int i=0; i<inputSize; i++) {

        cin >> input;
        l1.insertAtHead(input);
    }
    cout << endl;

    //displaying the linked list
    cout << "Your Linked List is: ";
    l1.displayList();

    //insertion at the end
    cout << "\nEnter the number of extra items you would like to add to the list: ";
    cin >> inputSize;

    cout << "Enter your items (each item is inserted at the end): ";
    for (int i=0; i<inputSize; i++) {

        cin >> input;
        l1.insertAtTail(input);
    }
    cout << endl;

    //displaying the linked list again
    cout << "Your updated Linked List is: ";
    l1.displayList();
    cout << endl;

    //delete at the beginning
    l1.deleteAtHead();

    cout << "After deleting the item at the beginning, your new Linked List is: ";
    l1.displayList();
    cout << endl;

    //delete at the end
    l1.deleteAtTail();
    
    cout << "After deleting the item at the end, your new Linked List is: ";
    l1.displayList();
    cout << endl;

    //search demonstration
    cout << "Enter the item you would like to search the Linked List for: ";
    cin >> input;

    if (l1.search(input)==true) {

        cout << "Your item has been found in the Linked List! (Look below)" << endl;
        l1.displayList();
    }
    else if (l1.search(input)==false) {

        cout << "Your item has isn't in the Linked List." << endl;
    }
    cout << endl;

    return 0;
}