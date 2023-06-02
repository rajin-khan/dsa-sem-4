#include<iostream>

using namespace std;

int DecToBin(int dec) {

    int base = 1, lastDigit;

    if (dec==0) {

        return 0;
    }
    else {

        lastDigit = dec%2;
        base *= 10;
        return lastDigit + (base*DecToBin(dec/2)); 
    }
}

int main() {

    int dec;

    cout << "\nThis program will convert your decimal number to its binary equivalent." << endl << endl;

    cout << "Please enter your number: ";
    cin >> dec;

    cout << DecToBin(dec) << endl << endl;

    return 0;
}