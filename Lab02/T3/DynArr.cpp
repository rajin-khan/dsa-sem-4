#include"DynArr.h"
#include<iostream>

using namespace std;

DynArr::DynArr() {

    data = NULL;
    rows = 0;
    cols = 0;
}

DynArr::DynArr(int r, int c) {

    data = new int*[r];

    for (int i=0; i<r; i++) {

        data[i] = new int[c];
    }

    rows = r;
    cols = c;
}

DynArr::~DynArr() {

    for (int i=0; i<rows; i++) {

        delete[] data[i];
    }

    delete[] data;
    data = NULL;
}

int DynArr::getValue(int row, int col) {

    return data[row][col];
}

void DynArr::setValue(int row, int col, int value) {

    data[row][col] = value;
}