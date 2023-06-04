#include "binarysearchtree.h"
#include "binarysearchtree.cpp"

#include <iostream>

using namespace std;

/*
void insertInOrder(TreeType<int>& tree, int item) {

    int current;
    bool found;

    tree.GetNextItem(current, IN_ORDER, found);

    if (!found || item<current) {

        tree.InsertItem(item);
    }
    else {

        insertInOrder(tree, item);
    }
}

void minHeightTree(TreeType<int>& tree, int arr[], int start, int end) { 

    if (start>end) {

        return;
    }

    int midIndex = (start+end)/2;

    int root = arr[midIndex];

    insertInOrder(tree, root);

    minHeightTree(tree, arr, start, midIndex-1);
    minHeightTree(tree, arr, midIndex+1, end);
}
*/

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

        cout << "Item is found" << endl;
    }
    else {

        cout << "Item is not found" << endl;
    }

    found = false;
    searchKey = 13;

    t1.RetrieveItem(searchKey, found);

    if (found) {

        cout << "Item is found" << endl;
    }
    else {

        cout << "Item is not found" << endl;
    }

    bool finished = false;
    int output;

    t1.ResetTree(IN_ORDER);

    while (finished!=true) {

        t1.GetNextItem(output, IN_ORDER, finished);

        cout << output << " ";
    }

    cout << endl;

    finished = false;

    t1.ResetTree(PRE_ORDER);

    while (finished!=true) {

        t1.GetNextItem(output, PRE_ORDER, finished);

        cout << output << " ";
    }

    cout << endl;

    finished = false;

    t1.ResetTree(POST_ORDER);

    while (finished!=true) {

        t1.GetNextItem(output, POST_ORDER, finished);

        cout << output << " ";
    }

    cout << endl;

    t1.MakeEmpty();

    /*

    int arr[10];

    for (int i=0; i<10; i++) {

        cin >> arr[i];
    }

    TreeType<int> bst;
    int size = ArrayLength(arr) - 1;

    // Build the balanced binary search tree
    BuildBalancedBST(bst, arr, 0, size - 1);
    
    // Print the optimized binary search tree
    bst.Print();
    
    */

    return 0;
}