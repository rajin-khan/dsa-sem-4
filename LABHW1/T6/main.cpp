#include"Complex.cpp"
#include<iostream>

using namespace std;

int main() {

    cout << endl;
    
    Complex c1(5, 10);
    Complex c2(4, 8);

    c1.print();
    c2.print();

    Complex c3, c4, c5, c6;

    c3 = c1 + c2;
    c3.print();

    c4 = c1 - c2;
    c4.print();
    
    c5 = c1 * c2;
    c5.print();
    
    c6 = c1 / c2;
    c6.print();

    return 0;
}