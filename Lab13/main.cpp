#include "binarysearchtree.h"
#include "binarysearchtree.cpp"

#include <iostream>

using namespace std;

int main()
{
    TreeType<int> t1;

    if (t1.IsEmpty()) {

        cout << "Tree is empty";
    }
    else {

        cout << "Tree is not empty";
    }

    cout << endl;

    int input;

    for (int i=0; i<10; i++) {

        cin >> input;
        t1.InsertItem(input);
    }

    if (t1.IsEmpty()) {

        cout << "Tree is empty";
    }
    else {

        cout << "Tree is not empty";
    }

    cout << endl;

    cout << t1.LengthIs() << endl;

    bool found=false;
    int searchKey = 9;

    t1.RetrieveItem(searchKey, found);

    if (found) {

        cout << "Item is found";
    }
    else {

        cout << "Item is not found";
    }

    found = false;
    searchKey = 13;

    t1.RetrieveItem(searchKey, found);

    if (found) {

        cout << "Item is found";
    }
    else {

        cout << "Item is not found";
    }

    bool finished = false;
    int output;

    //complete the rest

    return 0;
}