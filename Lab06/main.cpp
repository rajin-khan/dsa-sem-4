#include"UnsortedType.cpp"
#include<iostream>

using namespace std;

int main() {

    UnsortedType<int> l1;

    //insert 4 items

    int input1;

    cout << "Enter 4 items: ";

    for (int i=0; i<4; i++) {

        cin >> input1;

        l1.InsertItem(input1);
    }

    //print the list

    int output1;
    l1.ResetList();

    cout << "The list is: ";

    for (int i=0; i<l1.LengthIs(); i++) {

        l1.GetNextItem(output1);

        cout << output1;
    }

    //print the length of the list

    cout << endl;

    cout << "the length of the list is: ";

    cout << l1.LengthIs();

    //insert one item

    cout << endl;
    l1.ResetList();

    cout << "Insert one item: ";

    int input2;

    cin >> input2;

    l1.InsertItem(input2);

    //print the list

    l1.ResetList();

    cout << "The updated list is: ";
    int output2;

    for (int i=0; i<l1.LengthIs(); i++) {

        l1.GetNextItem(output2);
        cout << output2;
    }

    //retrieve 4 and print whether found or not

    cout << endl;
    l1.ResetList();

    int input3;
    bool found1;

    cout << "Enter the number you would like to search for: ";
    cin >> input3;

    l1.RetrieveItem(input3, found1);

    if (found1==true) {

        cout << "Item has been found";
    }
    else {

        cout << "Item not found";
    }

    //retrieve 5 and print whether found or not

    cout << endl;
    l1.ResetList();

    int input4 = 5;
    bool found2;

    cout << "Enter the number you would like to search for: ";
    cin >> input4;

    l1.RetrieveItem(input4, found2);

    if (found2==true) {

        cout << "Item has been found";
    }
    else {

        cout << "Item not found";
    }

    //retrieve 9 and print whether found or not

    cout << endl;
    l1.ResetList();

    int input5 = 5;
    bool found3;

    cout << "Enter the number you would like to search for: ";
    cin >> input5;

    l1.RetrieveItem(input5, found3);

    if (found3==true) {

        cout << "Item has been found";
    }
    else {

        cout << "Item not found";
    }

    //retrieve 10 and print whether found or not

    cout << endl;
    l1.ResetList();

    int input6 = 5;
    bool found4;

    cout << "Enter the number you would like to search for: ";
    cin >> input6;

    l1.RetrieveItem(input6, found4);

    if (found4==true) {

        cout << "Item has been found";
    }
    else {

        cout << "Item not found";
    }

    //print if the list is full or not

    if (l1.IsFull()==true) {

        cout << "List is full";
    }
    else if(l1.IsFull()==false) {

        cout << "List is not full";
    }

    //delete 5

    l1.DeleteItem(5);

    //print if the list is full or not

    if (l1.IsFull()==true) {

        cout << "List is full";
    }
    else if(l1.IsFull()==false) {

        cout << "List is not full";
    }

    //delete 1

    l1.DeleteItem(1);

    //print the list

    l1.ResetList();

    cout << "The updated list is: ";
    int output3;

    for (int i=0; i<l1.LengthIs(); i++) {

        l1.GetNextItem(output3);
        cout << output3;
    }

    //delete 6

    l1.DeleteItem(6);

    //print the list

    l1.ResetList();

    cout << "The updated list is: ";
    int output4;

    for (int i=0; i<l1.LengthIs(); i++) {

        l1.GetNextItem(output4);
        cout << output4;
    }

    return 0;
}