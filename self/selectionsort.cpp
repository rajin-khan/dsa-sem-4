#include<iostream>

using namespace std;

void selectionSort(int a[], int length) {

    for (int i=0; i<length-1; i++) {

        int min_pos = i;

        for (int j=i+1; j<length; j++) {

            if (a[j]<a[min_pos]) {

                min_pos = j;
            }
        }

        if (min_pos!=i) {

            int temp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = temp;
        }
    }
}

int main() {

    int size = 0;

    cout << "Enter the size of your array: ";

    cin >> size;

    int a[size];

    cout << "Enter the elements of the array: ";

    for (int i=0; i<size; i++) {

        cin >> a[i];
    }

    cout << endl;

    cout << "The unsorted array is: ";

    for (int i=0; i<size; i++) {
        
        cout << a[i] << " ";
    }

    cout << endl;

    selectionSort(a, size);

    cout << "The sorted array is: ";

    for (int i=0; i<size; i++) {
        
        cout << a[i] << " ";
    }

    return 0;
}