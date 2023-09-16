#include<iostream>
#include<string>

using namespace std;

int main() {

    int n, m;

    cout << "\nEnter the rows of the 2D Array: ";
    cin >> n;

    cout << "\nEnter the columns of the 2D Array: ";
    cin >> m;

    string** table = new string*[n]; //here, we have a pointer table, that is pointing to an array of stringpointers, hence the ** before table

    for (int i=0; i<n; i++) {

        table[i] = new string[m]; //initializing each index of the table pointer array with a new string array of size m
    }

    cout << "\nEnter the elements of the array: ";

    for (int i=0; i<n; i++) {

        for (int j=0; j<m; j++) {

            cin >> table[i][j];
        }
    }

    cout << "\nYour entered array is: \n\n";

    for (int i=0; i<n; i++) {

        for (int j=0; j<m; j++) {

            cout << table[i][j] << "\t";
        }

        cout << endl;
    }

    cout << endl;

    for (int i=0; i<n; i++) {
        
        delete[] table[i];
    }

    delete[] table;

    table = NULL;

    return 0;
}