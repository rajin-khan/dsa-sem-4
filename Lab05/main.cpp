#include"SortedType.cpp"

#include<iostream>

using namespace std;

int main() {

    //Create a list of integers
    SortedType<int> l1;

    //Print the length
    cout << l1.LengthIs() << endl;

    //Insert five items

    int input1;

    for (int i=0; i<5; i++) {

        cin >> input1;

        l1.InsertItem(input1);
    }

    //Print the list

    for (int i=0; i<5; i++) {

        int output1;

        l1.GetNextItem(output1);

        cout << output1 << " ";
    }

    cout << endl;
    
    //Retrieve 6 and print whether found

    int input2 = 6;
    bool found1;

    l1.RetrieveItem(input2, found1);

    if (found1==true) {

        cout << "Item has been found!";
    }
    else if (found1==false) {

        cout << "Item has not been found!";
    }

    //Retrieve 5 and print whether found

    int input3 = 5;
    bool found2=false;

    l1.RetrieveItem(input3, found2);

    if (found2) {

        cout << "Item has been found!";
    }
    else {

        cout << "Item has not been found!";
    }

    //Print if the list is full or not

    if (l1.IsFull()) {

        cout << "List is full.";
    }
    else {

        cout << "List is not full yet.";
    }

    //Delete 1

    l1.DeleteItem(1);

    //Print the list 

    for (int i=0; i<5; i++) {

        int output3;

        l1.GetNextItem(output3);

        cout << output3 << " ";
    }

    cout << endl;

    //Print if the list is full or not

    if (l1.IsFull()) {

        cout << "List is full.";
    }
    else {

        cout << "List is not full yet.";
    }

    return 0;
}