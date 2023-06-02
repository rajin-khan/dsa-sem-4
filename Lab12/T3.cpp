#include<iostream>

using namespace std;

int sumOfDigits(int x) {

    if (x<=10 && x>=0) {

        return x;
    }

    return x%10 + sumOfDigits(x/10);
}

int main() {

    int input;

    cout << "\nThis program will return the sum of the digits of any number you enter.\nEnter your number: "; 
    cin >> input;

    cout << "\nThe sum of the digits are: " << sumOfDigits(input) << endl << endl;

    return 0;
}