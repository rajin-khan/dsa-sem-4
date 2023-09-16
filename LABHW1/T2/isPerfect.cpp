#include<iostream>

using namespace std;

bool isPerfect(int x) {

    int checksum = 0;

    for (int i=1; i<=x/2; i++) {

            if (x%i==0) {

                checksum += i;
            }
        }

    if (checksum == x) {

        return true;
    }
    else {

        return false;
    }
}

int main() {

    int a, b;

    cout << "\nThis program will print the perfect numbers between two integers you enter." << endl << endl;

    int max = 0, min = 0;

    while (true) {

        cout << "Enter two integers: ";
        cin >> a >> b;

        if (a>b) {

            max = a;
            min = b;
            break;
        }
        else if (b>a) {

            max = b;
            min = a;
            break;
        }
        else {

            cout << "The two numbers cannot be equal." << endl << endl;
        }
    }

    cout << "\nIn between " << min << " and " << max << ", the perfect numbers are: ";

    for (int i=min; i<=max; i++) {

        if (isPerfect(i)==true) {

            cout << i << ", ";
        }
        else {

            continue;
        }
    }

    cout << "\b\b " << endl << endl; //b moves the cursos one place back, then replaces it with whatever you type after it.

    return 0;
}