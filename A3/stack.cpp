#include"stack.h"
#include<iostream>

using namespace std;

template <class T>
stack<T>::stack() {

    top = -1; //initially, the top is set to -1, so as to indicate an empty stack has been initialized
}

template <class T>
void stack<T>::push(T item) {

    if (isFull()) { //if the stack is full, more items cannot be pushed into it, therefore, the push function hands back control to the main with an output saying that the stack is already full

        cout << "The Stack is full." << endl;
        return;
    }

    top++; //if the stack isn't full, then the top index increments,
    stackArray[top] = item; //and the item is assigned to the top index
}

template <class T>
void stack<T>::pop(bool& emptyPop) { //the reference boolean is sent here to let us know if the pop function was called on an empty function

    emptyPop = false; //initially, it is set to false

    if (isEmpty()) {

        emptyPop = true; //if the stack is found to be empty, then the emptyPop variable gets set to true
        return; //and then we return from the function
    }
    top--; //and the top index shifts back by one
}

template <class T>
bool stack<T>::isEmpty() {

    if (top==-1) { //if the top index is same as when initialized, it is empty

        return true; //hence we return true
    }
    else {

        return false;
    }
}

template <class T>
bool stack<T>::isFull() {

    if (top==MAX_ITEMS-1) { //if the top index iterates as we push more items and reaches the max length-1, meaning the highest index, we return true

        return true;
    }
    else {

        return false;
    }
}

template <class T>
void stack<T>::makeEmpty() {

    top = -1; //we set the top index back to -1, indicating an empty stack
}