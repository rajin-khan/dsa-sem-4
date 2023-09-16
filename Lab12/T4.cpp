#include<iostream>

using namespace std;

int findMin(int a[], int size) {

    if (size == 1) {

        return a[0];
    } 
    else {

        int min = findMin(a, size - 1);

        if (a[size - 1] < min) {

            min = a[size - 1];
        }
        return min;
    }
}


int main() {

    int size;

    cout << "\nThis program will give the minimum number from an array of numbers you enter." << endl;

    cout << "Please enter the size of your array: ";
    cin >> size;

    int array[size];

    cout << "\nEnter " << size << " numbers: " << endl;

    for (int i=0; i<size; i++) {

        cin >> array[i];
    }

    cout << "The minimum number in your array is: " << findMin(array, size) << endl << endl;

    return 0;
}