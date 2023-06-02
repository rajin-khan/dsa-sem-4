#include<iostream>

using namespace std;

bool isPrime(int x) {

    bool flag = true;

    int num = x;

    for (int i=2; i<=num/2; i++) {

        if (num%i==0) {

            flag = false;
        }
    }

    return flag;
}

int main() {

    cout << "\nThe prime numbers between 300-500 are: ";

    for (int i=300; i<=500; i++) {

        if (isPrime(i)==true) {

            cout << i << ", ";
        }
        else {

            continue;
        }
    }

    cout << "\b\b." << endl << endl;

    return 0;
}