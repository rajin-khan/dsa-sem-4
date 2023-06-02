#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex {

    private:

        double real;
        double imaginary;
    
    public: 

        Complex();
        Complex(double, double);

        Complex operator+(Complex);
        Complex operator-(Complex);
        Complex operator*(Complex);
        Complex operator/(Complex);

        double getModulus();

        void print();
};

#endif