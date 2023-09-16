#include<iostream>

using namespace std;

int main() {

    int n, m;

    cout << "\nEnter the rows of the 2D Array: ";
    cin >> n;

    int** table = new int*[n]; //pointer table to an array of pointers

    int col[n]; //a static array for storing the number of columns

    for (int i=0; i<n; i++) {

        cout << "\nEnter the columns for row " << i << ": ";
        cin >> col[i]; //the number of columns is stored for each row
        table[i] = new int[col[i]]; //the array at index i is initialized for the number of columns

        cout << "\nEnter the elements for the row " << i << ": ";

        for (int j=0; j<col[i]; j++) { //the loop iterates only until the specific column number for each row

            cin >> table[i][j];
        }
    }

    cout << "\nYour entered array is: \n\n";

    for (int i=0; i<n; i++) {

        for (int j=0; j<col[i]; j++) {

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