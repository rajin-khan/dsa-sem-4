#include<iostream>

using namespace std;

int main() {

    int n;

    cout << "\nEnter the size of the array: ";
    cin >> n;

    int* a1 = new int[n];

    cout << "\nEnter the elements of the array: ";

    for (int i=0; i<n; i++) {

        cin >> a1[i];
    }

    cout << "\nYour entered array is: \n\n";

    for (int i=0; i<n; i++) {

        cout << a1[i] << endl;
    }

    cout << endl;

    delete[] a1;

    a1 = NULL;

    return 0;
}