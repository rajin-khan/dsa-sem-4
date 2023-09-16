#include"DynArr.h"
#include<iostream>

using namespace std;

template <class T>
DynArr<T>::DynArr() {

    data = NULL;
    size = 0;
}

template <class T>
DynArr<T>::DynArr(int s) {

    data = new T[s];
    size = s;
}

template <class T>
DynArr<T>::~DynArr() {

    delete[] data;
    data = NULL;
}

template <class T>
T DynArr<T>::getValue(int index) {

    return data[index];
}

template <class T>
void DynArr<T>::setValue(int index, T value) {

    data[index] = value;
}

template <class T>
void DynArr<T>::allocate(int s) {

    if (size>0) {

        delete[] data;
    }

    data = new T[s];

    size = s;
}