#include "Complex.h"
#include<iostream>

using namespace std;

Complex::Complex() {

    real = 0;
    imaginary = 0;
}

Complex::Complex(double r, double i) {

    real = r;
    imaginary = i;
}

Complex Complex::operator+(Complex a) {

    Complex num;

    num.real = real + a.real;
    num.imaginary = imaginary + a.imaginary;

    return num;
}

Complex Complex::operator-(Complex a) {

    Complex num;

    num.real = real - a.real;
    num.imaginary = imaginary - a.imaginary;

    return num;
}

Complex Complex::operator*(Complex a) {

    Complex num;

    num.real = (real * a.real) - (imaginary * a.imaginary);
    num.imaginary = (imaginary * a.real) + (real * a.imaginary);

    return num;
}

Complex Complex::operator/(Complex a) {

    Complex num;

    num.real = ( (real * a.real) + (imaginary * a.imaginary) ) / ( (a.real * a.real) + (a.imaginary * a.imaginary) );
    num.imaginary = ( (imaginary * a.real) - (real * a.imaginary) ) / ( (a.real * a.real) + (a.imaginary * a.imaginary) );

    return num;
}

double Complex::getModulus() {

    return (real*real) + (imaginary*imaginary);
}

void Complex::print() {

    cout << "The complex number is: " << real << " + " << imaginary << "i , and its modulus is: " << getModulus() << endl << endl;
}