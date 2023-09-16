#include"Rectangle.cpp"
#include<iostream>

using namespace std;

int main() {

    Rectangle<int> r1(2, 4);
    Rectangle<double> r2(2.5, 4.5);

    cout << "\nFor rectangle 1, ";
    r1.print();

    cout << "For rectangle 2, ";
    r2.print();

    return 0;
}