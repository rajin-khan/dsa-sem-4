#include "UnsortedType.h"
#include <iostream>

using namespace std;

template <class ItemType>
UnsortedType<ItemType>::UnsortedType() {

    length = 0;
    listData = NULL;
    currentPos = NULL;
}

template <class ItemType>
UnsortedType<ItemType>::~UnsortedType() {

    MakeEmpty(); //for the destructor, you just make the list empty.
}

template<class ItemType>
bool UnsortedType<ItemType>::IsFull() {

    NodeType* location;

    try {

        location = new NodeType; //just a test to see whether or not memory can be allocated at all
        delete location; //once checked, you delete the node pointer (if you can't assign memory, it exits from the previous step)
        return false; //return false
    }
    catch(bad_alloc& exception) //if memory is full in the storage, it throws this error if the memory cannot be allocated.
    {
        return true; //so, we return isfull to be true
    }
}

template <class ItemType>
int UnsortedType<ItemType>::LengthIs() {

    return length;
}

template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item) {

    NodeType* location;

    location = new NodeType;

    location->info = item;
    location->next = listData;

    listData = location;

    length++;
}

template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item) {

    NodeType* location = listData;
    NodeType* tempLocation;

    if (item == listData->info)
    {
        tempLocation = location;
        listData = listData->next; //header updated here
    }
    else {
        location->next = (location->next)->next; //if not found, the location of the traversal pointer points to the next pointer
    }

    delete tempLocation; //deleting the node because templocation has the address of the thing we need to delete
    length--; 
}

template <class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType& item, bool& found) {

    NodeType* location = listData;

    bool moreToSearch = (location != NULL); //search stays true as long as location is not at the end, (null)
    found = false;

    while (moreToSearch && !found)
    {
        if (item == location->info) {

            found = true;
        }
        else {

            moreToSearch = (location != NULL);
        }
    } 
}

template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty() {

    NodeType* tempPtr;

    while (listData != NULL)
    {
        tempPtr = listData; //pointer holds the location of the head
        listData = listData->next; //now listdata (head's) pointer is pointing to the next element
        delete tempPtr; //the first one is deleted.
    }

    length = 0; 
}

template <class ItemType>
void UnsortedType<ItemType>::ResetList() {

    currentPos = NULL;
}

template <class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType& item) {

    if (currentPos == NULL) {

        currentPos = listData;
    }
    else {

        currentPos = currentPos->next;
    }

    item = currentPos->info;
}