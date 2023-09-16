#ifndef SORTEDLIST_H_INCLUDED
#define SORTEDLIST_H_INCLUDED

const int maxLength = 7; //pre-defined length since we were not asked to allocate memory dynamically

template <class T>
class sortedList {

    public:

        sortedList(); //constructor

        void insertItem(T);
        void deleteItem(T);
        bool searchItem(T, int&); //this function takes the item the end user would search for as a parameter, and a reference variable for the index at which it would be found.

        void resetList(); //necessary for traversing through the list as we print
        T getNextItem(); //for printing the list

        int currentIndex; //to keep track of the current index

    private:

        int length;
        T data[maxLength];
};

#endif