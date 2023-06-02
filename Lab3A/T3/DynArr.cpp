#include"DynArr.h"
#include<iostream>

using namespace std;

template <class T>
DynArr<T>::DynArr() {

    data = NULL;
    rows = 0;
    cols = 0;
}

template <class T>
DynArr<T>::DynArr(int r, int c) {

    data = new T*[r];

    for (int i=0; i<r; i++) {

        data[i] = new T[c];
    }

    rows = r;
    cols = c;
}

template <class T>
DynArr<T>::~DynArr() {

    for (int i=0; i<rows; i++) {

        delete[] data[i];
    }

    delete[] data;
    data = NULL;
}

template <class T>
T DynArr<T>::getValue(int row, int col) {

    return data[row][col];
}

template <class T>
void DynArr<T>::setValue(int row, int col, T value) {

    data[row][col] = value;
}