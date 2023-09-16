#include"sortedList.cpp"
#include<iostream>

using namespace std;

int main() {

    sortedList<int> l1;
    int input;
    int indexFound;
    int searchKey;

    //inserting
    cout << "\nThe max number of items in this list has been pre-defined at 7." << endl << endl;

    cout << "Insert 5 items: "; //four items are inserted first to demonstrate that it works in a loop

    for (int i=0; i<5; i++) {

        cin >> input;
        l1.insertItem(input);
    }

    cout << "Insert another item: "; //items are inserted separately to demonstrate it works like that too

    cin >> input;

    l1.insertItem(input);

    cout << "Insert the last item: ";

    cin >> input;

    l1.insertItem(input);

    cout << endl;

    //printing
    cout << "Your sorted list is: ";

    for (int i=0; i<7; i++) {

        cout << l1.getNextItem() << " ";
    }

    cout << endl;

    //searching
    cout << "\nEnter an item you would like to search for: ";

    cin >> searchKey;

    if (l1.searchItem(searchKey, indexFound)==true) {

        cout << "Item found! (at index: " << indexFound << ")." << endl;
    }
    else {

        cout << "Your item is not in the list." << endl;
    }

    //deletion demonstration
    cout << "\nEnter an item you would like to delete from the list: ";

    cin >> input;
    l1.deleteItem(input);

    int deleteKey;
    
    cout << "Your updated list, after deletion of " << input << " is: ";

    l1.resetList();

    for (int i=0; i<6; i++) {

        cout << l1.getNextItem() << " ";
    }

    cout << endl;

    return 0;
}