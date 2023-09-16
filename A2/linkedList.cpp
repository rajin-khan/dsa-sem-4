#include"linkedList.h"
#include<iostream>

using namespace std;

//constructor
template <class T>
linkedList<T>::linkedList() {

    head = NULL; //initially, the head points to nothing.
}

//insert at the beginning
template <class T>
void linkedList<T>::insertAtHead(T item) {

    node* temp = head; //temporary pointer is given the value of the head pointer
    node* newNode = new node; //new node type is created

    if (temp==NULL) { //if there is nothing in the list, meaning at the very beginning

        newNode->data = item; //data is assigned to the node
        newNode->next = NULL; //the next pointer gets assigned to NULL, since it is the very first item
        head = newNode; //head is given the value of this new node
    }
    else { //otherwise, if there are items in the list

        newNode->data = item; //data is assigned
        newNode->next = temp; //this new node now points to the very first node, i.e, the location that the head pointer holds
        head = newNode; //head is given the value of this new node
    }
}

//insert at the end
template <class T>
void linkedList<T>::insertAtTail(T item) {

    node* temp = head; //temporary pointer is given the value of the head pointer
    node* newNode = new node; //new node type is created

    if (temp==NULL) { //if there is nothing in the list, meaning at the very beginning

        newNode->data = item; //data is assigned
        newNode->next = NULL; //the next pointer gets assigned to NULL, since it is the very first item
        head = newNode; //head is given the value of this new node
    }
    else {

        while(temp->next!=NULL) { //otherwise, if the list has items in it

            temp =  temp->next; //it iterates till it reaches the end node
        }

        newNode->data = item; //then data is assigned
        newNode->next = NULL; //the next pointer of the new node points to NULL, as it is at the end
        temp->next = newNode; //the previously last node's next pointer now points to the new node's address
    }
}


//delete at the beginning
template <class T>
void linkedList<T>::deleteAtHead() {

    node* temp = head; //temporary pointer is given the value of the head pointer

    head = head->next; //head simply points to the next node
    delete temp; //the temporary pointer, that holds the address of the previous head, is now deleted

}


//delete at the end
template <class T>
void linkedList<T>::deleteAtTail() {

    node* temp = head; //temporary pointer is given the value of the head pointer

    if (temp==NULL) { //if there is nothing in the list,

        return; //we have nothing to delete, so control is returned to main
    }
    else if (temp->next==NULL){ //if there is only one item in the list,

        delete temp; //we simply delete the content at temp's (head's) location
        head=NULL; //head then points to nothing, since there is nothing in the list anymore
        return; //control is returned to main
    }

    //if there are more than 1 items on the list,
    while((temp->next)->next!=NULL) { //we check if the next node's pointer points to null (i.e, we keep going until the second-to-last node)

        temp = temp->next; //and keep iterating
    }

    //once we reach the second-to-last node,
    node* toBeDeleted = temp->next; //a new temporary pointer, toBeDeleted, is assigned the address of the last node (which the current node is pointing to)
    temp->next = NULL; //now we can make the second-to-last node point to NULL, making it the new "last" node
    delete toBeDeleted; //and delete the contents at the pointer toBeDeleted

}


//print the linkedlist
template <class T>
void linkedList<T>::displayList() {

    node* temp = head; //temporary pointer is given the value of the head pointer

    while(temp!=NULL) { //until temp points to null (gone past all the nodes)

        cout << temp->data << " -> "; //we print,
        temp = temp->next; //and iterate
    }

    cout << "NULL" << endl;; //at the very end, null is output to show the end of the list
}


//search for an item in the linkedlist
template <class T>
bool linkedList<T>::search(T item) {

    node* temp = head; //temporary pointer is given the value of the head pointer

    if (temp==NULL) { //if there is nothing in the list (head is pointing to NULL)

        cout << "List is empty." << endl; //we output a message
        return false; //and hand back control to the main by returning false
    }

    while(temp!=NULL) { //otherwise, until temp points to null (gone past all the nodes)

        if (item==temp->data) { //we check the key with the data at that node

            return true; //if found, we return true
        }

        temp = temp->next; //if it isn't in the current node, we iterate to the next one
    }

    return false; //if it's come out of the loop, it means it wasn't found in the list, hence we return false and hand back control to the main.
}