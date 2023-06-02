#include<iostream>

using namespace std;

int main() {

    float num;

    cout << "\nThis program will print the factorial of the number you enter." << endl;

    cout << "\nEnter your number: ";
    cin >> num;

    float fact = 1;

    for (int i=1; i<=num; i++) {

        fact *= i;
    }

    cout << num << "! = " << fact << endl << endl;

    return 0;
}