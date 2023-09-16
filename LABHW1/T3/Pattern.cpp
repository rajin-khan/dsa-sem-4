#include<iostream>

using namespace std;

int main() {

    for (int i=0; i<6; i++) {

        for (int j=0; j<i; j++) {

            if (i%2==0) {

                cout << "+";
            }
            else {

                cout << "*";
            }
        }

        cout << endl;
    }

    cout << endl;

    return 0;
}