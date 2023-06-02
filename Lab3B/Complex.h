#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

template <class T>
class Complex{

    private:
    
        T Real;
        T Imaginary;

    public:

        Complex();
        Complex(T, T);
        Complex operator+(Complex);
        Complex operator*(Complex);
        bool operator!=(Complex);
        void Print();

};

#endif