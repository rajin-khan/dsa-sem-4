#include"Complex.h"
#include<iostream>

using namespace std;

template <class T>
Complex<T>::Complex() {

    Real = 0;
    Imaginary = 0;
}

template <class T>
Complex<T>::Complex(T r, T i) {
    
    Real = r;
    Imaginary = i;
}

template <class T>
Complex<T> Complex<T>::operator+(Complex a) {

    Complex t;

    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;

    return t;
}

template <class T>
Complex<T> Complex<T>::operator*(Complex a) {

    Complex t;

    t.Real = (Real * a.Real) - (Imaginary * a.Imaginary);
    t.Imaginary = (Real * a.Imaginary) + (Imaginary * a.Real);
    
    return t;
}

template <class T>
bool Complex<T>::operator!=(Complex a) {

    bool result = (Real != a.Real) || (Imaginary != a.Imaginary);
    return result;
}

template <class T>
void Complex<T>::Print() {
    
    cout << "rp: " << Real << ", ip: " << Imaginary << endl;
}