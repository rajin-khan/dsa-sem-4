#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

const int MAX_ITEMS = 20;

template <class T>
class stack {

    private:

        int top; //the index counter that iterates and keeps count of the current index to be inserted at
        T stackArray[MAX_ITEMS];

    public:

        stack(); //constructor

        void push(T);
        void pop(bool&); //a boolean reference is passed to let us know if the pop is happening on an empty stack without hindering the program or terminating prematurely

        bool isEmpty();
        bool isFull();

        void makeEmpty();
};

#endif