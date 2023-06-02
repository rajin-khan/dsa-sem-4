#include"Rectangle.h"
#include<iostream>

using namespace std;

template <class T> 
Rectangle<T>::Rectangle() {

    length = 1;
    width = 1;
}

template <class T>
Rectangle<T>::Rectangle(T l, T w) {

    length = l;
    width = w;
}

template <class T>
void Rectangle<T>::setLength(T l) {

    length = l;
}

template <class T>
void Rectangle<T>::setWidth(T w) {

    width = w;
}

template <class T>
T Rectangle<T>::getLength() {

    return length;
}

template <class T>
T Rectangle<T>::getWidth() {

    return width;
}

template <class T>
T Rectangle<T>::getArea() {

    return length * width;
}

template <class T>
T Rectangle<T>::getPerimeter() {

    return 2*(length+width);
}

template <class T>
void Rectangle<T>::print() {

    cout << "The length is: " << getLength() << " units, and the width is: " << getWidth() << " units.\nThe perimeter is: " << getPerimeter() << " units, and the area is: " << getArea() << " sq units." << endl << endl;
}
