#include"DynArr.h"

#include<iostream>

using namespace std;

DynArr::DynArr() {

    data = NULL;
    size = 0;
}

DynArr::DynArr(int s) {

    data = new int[s];
    size = s;
}

DynArr::~DynArr() {

    delete[] data;
    data = NULL; //NEVER FORGET THIS LINE
}

int DynArr::getValue(int index) {

    return data[index];
}

void DynArr::setValue(int index, int value) {

    data[index] = value;
}

void DynArr::allocate(int s) {

    int* temp = data; //pointing to data array location

    data = new int[size+s]; //new location is created with increased size

    for (int i=0; i<size; i++) {

        data[i] = temp[i]; //data array now holds the values pointed by the temp pointer
    }

    size += s; //the value of size is updated

    delete[] temp; //clear the temp array

    temp = NULL; //make the pointer null
}