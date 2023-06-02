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

    if (size>0) {

        delete[] data;
    }

    data = new int[s];

    size = s;
}