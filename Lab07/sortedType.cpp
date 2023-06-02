#include "sortedType.h"
#include <iostream>

using namespace std;

template <class ItemType>
SortedType<ItemType>::SortedType() {

    length = 0;
    listData = NULL;
    currentPos = NULL;
}

template <class ItemType>
int SortedType<ItemType>::LengthIs() {

    return length;
}

template<class ItemType>
bool SortedType<ItemType>::IsFull() { //since linkedlist takes data until memory on device is full, we try assigning memory to check whether or not it is full

    NodeType* location;
    try
    {
        location = new NodeType; //we try assigning a new memory
        delete location; //if it works, it works, but we have to free up the memory too, so we do that
        return false;
    }
    catch(bad_alloc& exception) //if there is a memory allocation error, we catch it
    {
        return true;
    }
}

template <class ItemType>
void SortedType<ItemType>::RetrieveItem(ItemType & item, bool& found) {

    //we usually use a binary search for a sorted list, but since linked list cannot give a start index or end index, we can't apply it, so we use a binary search.
    
    NodeType* location = listData; //listdata is the head
    bool moreToSearch = (location != NULL);
    found = false;

    while (moreToSearch && !found) {

        if (item == location->info) {

            found = true;
        }
        else if (item > location->info) {

            location = location->next;
            moreToSearch = (location != NULL);
        }
        else {
            
            moreToSearch = false; // since it's a sortedlist, if the node item is greater than the item we're searching with, we can assume it doesn't exist in that list (since it's sorted), so we stop the search
        }
    }
}

template <class ItemType>
void SortedType<ItemType>::InsertItem(ItemType item) {

    NodeType* newNode;
    NodeType* predLoc; //by this they mean previous location's pointer
    NodeType* location;
    bool moreToSearch;

    location = listData; //listdata is the head
    predLoc = NULL; //since there is nothing before the head, the prevloc pointer is null

    moreToSearch = (location != NULL);

    while (moreToSearch) {

        if (location->info < item) { //if item is bigger than what we're checking,

            predLoc = location; //prev location becomes current
            location = location->next; //current location becomes next location, and we move forward one step.
            moreToSearch = (location != NULL);
        }
        else moreToSearch = false;
    }

    newNode = new NodeType; //create a new node
    newNode->info = item; //then insert it into the info part

    if (predLoc == NULL) { //means if we're inserting at the beginning/head

        newNode->next = listData; //so the new thing's next points to the head.
        listData = newNode; //head is now the newnode pointer
    }
    else {

        predLoc->next = newNode;
    }
    length++; 
}

template <class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item) {

    NodeType* location = listData; //we create a pointer that points to the head
    NodeType* tempLocation; //we create a temporary pointer

    if (item == listData->info) { //now, if the item we're searching for is at the beginning,

        tempLocation = location; //then we hold the current index's location pointer in a temp variable,
        listData = listData->next; //then head becomes the next element's pointer (the next element becomes the head)
    }
    else {

        while (!(item==(location->next)->info)) { //this loops runs while item is not equal to the next node's info

            location = location->next; ////if not, we make location's pointer iterate
        }

        tempLocation = location->next;
        location->next = (location->next)->next; 
    }

    delete tempLocation;
    length--; 
}

template <class ItemType>
void SortedType<ItemType>::MakeEmpty() {

    NodeType* tempPtr;
    while (listData != NULL)
    {
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    
    length = 0; 
}

template <class ItemType> SortedType<ItemType>::~SortedType() {

    MakeEmpty();
}

template <class ItemType>
void SortedType<ItemType>::ResetList() {

  currentPos = NULL;
}

template <class ItemType>
void SortedType<ItemType>::GetNextItem(ItemType & item) {

    if (currentPos == NULL) {

        currentPos = listData;
    }
    else {

        currentPos = currentPos->next;
    }

    item = currentPos->info;
}
