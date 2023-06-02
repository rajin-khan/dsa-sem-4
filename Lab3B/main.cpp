#include"Complex.cpp"
#include<iostream>

using namespace std;

int main() {

    Complex<int> c1(2, 3);
    Complex<int> c2(2, 3);
    
    cout << "add result: " << endl;
    Complex ct1 = c1 + c2; 
    ct1.Print();
    
    cout << "multiply result: " << endl;
    Complex ct2 = c1 * c2;
    ct2.Print();

    cout << "not equal result: ";
    bool result = c1 != c2;
    
    if(result == true) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}