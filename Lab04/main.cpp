#include"UnsortedType.cpp"
#include<iostream>

using namespace std;

int main() {

    UnsortedType<int> u1;

    //insert 4 items
    for (int i=0; i<4; i++) {

        int input;
        cin >> input;

        u1.InsertItem(input);
    }
    
    //print the list
    for (int i=0; i<u1.LengthIs(); i++) {

        int output;
        u1.GetNextItem(output);
        
        cout << output << " ";
    }

    cout << endl;

    //print the length of the list
    cout << u1.LengthIs() << endl;

    //insert one item
    int input2;
    cin >> input2;

    u1.InsertItem(input2);

    cout << endl;

    //print the list (again)
    for (int i=0; i<u1.LengthIs(); i++) {

        int output2;
        u1.GetNextItem(output2);
        
        cout << output2 << " ";
    }

    cout << endl;

    //retrieve an item (4)
    int ui = 4;
    bool isFound;

    u1.RetrieveItem(ui, isFound);

    if (isFound) {

        cout << "Item has been found";
    } else {

        cout << "Item not found";
    }

    //retrieve an item (5)
    int ui2 = 5;
    bool isFound2;

    u1.RetrieveItem(ui2, isFound2);

    if (isFound2) {

        cout << "Item has been found";
    } else {

        cout << "Item not found";
    }

    //retrieve an item (9)
    int ui3 = 9;
    bool isFound3;

    u1.RetrieveItem(ui3, isFound3);

    if (isFound3) {

        cout << "Item has been found";
    } else {

        cout << "Item not found";
    }

    //retrieve an item (10)
    int ui4 = 10;
    bool isFound4;

    cin >> ui;

    u1.RetrieveItem(ui4, isFound4);

    if (isFound4) {

        cout << "Item has been found";
    } else {

        cout << "Item not found";
    }

    //print if the list is full or not
    if (u1.IsFull()) {

        cout << "List is full";
    } else {

        cout << "List is not full";
    }

    //delete 5
    u1.DeleteItem(5);

    //print if the list is full or not
    if (u1.IsFull()) {

        cout << "List is full";
    } else {

        cout << "List is not full";
    }

    //delete 1
    u1.DeleteItem(1);

    //print the list
    for (int i=0; i<u1.LengthIs(); i++) {

        int output3;
        u1.GetNextItem(output3);
        
        cout << output3 << " ";
    }

    //delete 6
    u1.DeleteItem(6);

    //print the list
    for (int i=0; i<u1.LengthIs(); i++) {

        int output4;
        u1.GetNextItem(output4);
        
        cout << output4 << " ";
    }

    return 0;
}