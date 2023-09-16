#include"sortedType.cpp"
#include<iostream>

using namespace std;

int main() {

    SortedType<int> l1;
    
    //Print length of the list

    cout << l1.LengthIs() << endl;
    
    //Insert five items

    int input;

    for (int i=0; i<5; i++) {

        cin >> input;
        l1.InsertItem(input);
    }
    
    //Print the list

    l1.ResetList();
    int output;

    for (int i=0; i<l1.LengthIs(); i++) {

        l1.GetNextItem(output);
        cout << output;
    }
    
    //Retrieve 6 and print whether found

    l1.ResetList();

    int searchkey = 6;
    bool find;

    l1.RetrieveItem(searchkey, find);

    if (find==true) {

        cout << "\nItem is found" << endl;
    }
    else {

        cout << "\nItem is not found" << endl;
    }
    
    //Retrieve 5 and print whether found

    l1.ResetList();

    searchkey = 5;

    l1.RetrieveItem(searchkey, find);

    if (find==true) {

        cout << "Item is found";
    }
    else {

        cout << "\nItem is not found";
    }
    
    //Print if the list is full or not

    if (l1.IsFull()==true) {

        cout << "List is full" << endl;
    }
    else {

        cout << "\nList is not full" << endl;
    }
    
    //Delete 1

    l1.DeleteItem(1);
    
    //Print the list

    l1.ResetList();

    for (int i=0; i<l1.LengthIs(); i++) {

        l1.GetNextItem(output);
        cout << output;
    }
    
    //Print if the list is full or not

    if (l1.IsFull()==true) {

        cout << "\nList is full";
    }
    else {

        cout << "\nList is not full" << endl;
    }

    return 0;
}