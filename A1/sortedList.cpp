#include"sortedList.h"

//constructor
template <class T>
sortedList<T>::sortedList() {

    length = 0;
    currentIndex = -1;
}

//insert function
template <class T>
void sortedList<T>::insertItem(T item) {

    int location = 0; //the index where the insertion is to happen is initially set to 0

    bool continueSearching = (location<length); //it will continue searching to insert an item until we reach the end

    while (continueSearching==true) {

        if (item>data[location]) { //if the item to be inserted is greater than the item at current index (location),

            location++; //we increment the value of location (the index where insertion will happen)
            continueSearching = (location<length); //and since this is true until we go through the whole list, we continue searching
        }
        else if (item<=data[location]) { //now, if the item to be inserted is less than or equal to the item at current index,

            continueSearching = false; //we break out of the loop
        }
    }

    for (int i=length; i>location; i--) { //the loop starts from the end and iterates backward until we reach the index before which insertion happens

        data[i] = data[i-1]; //and all the data moves forward one spot to accomodate for the insertion
    }

    data[location] = item; //and finally, the item is inserted
    length++;
}

//delete function
template <class T>
void sortedList<T>::deleteItem(T item) {

    for (int i=0; i<length; i++) { //we search the entire list

        if (item==data[i]) { //if we find the index of the item to be deleted,

            for (int j=i+1; j<length; j++) { //we begin a second loop from the index after that, till the end

                data[j-1] = data[j]; //and we shift all the values back by 1
            }
            length--; //and finally, length of the list is updated
            break; //and we then break out of the initial search loop
        }
    }
}

//search function
template <class T>
bool sortedList<T>::searchItem(T item, int& index) {

    //since this is a sorted list, we can perform a binary search.

    int startIndex = 0;
    int endIndex = length-1; //the indices are initialized

    while (startIndex<=endIndex) {

        int midIndex = (startIndex+endIndex)/2; //the midpoint is found

        if (item==data[midIndex]) { //if the searched item is found,

            index = midIndex; //we update the value of the reference index
            return true; //and return true
        }
        else if (item<data[midIndex]) { //if the searched value happens to be less than the value at midpoint,

            endIndex = midIndex-1; //we update the ending index to be before the midpoint, so the size of the searchable array is decreased by half
        }
        else { //else, if the searched value happens to be greater than the value at midpoint,

            startIndex = midIndex+1;  //we update the starting index to be after the midpoint, so the size of the searchable array is decreased by half again
        }
    }

    //this process continues until either the item is found, or the starting index goes above the ending index, whereby which we would know that the item is not in the list.
    return false;
}

template <class T>
void sortedList<T>::resetList() {

    currentIndex = -1; //necessary for traversal of list and printing
}

template<class T>
T sortedList<T>::getNextItem() {

    currentIndex++; //this is initially set to 0, so when we increment it upon calling this function, we get the first item.
    return data[currentIndex];
}