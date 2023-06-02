#include<iostream>

using namespace std;

void bubbleSort(int a[], int length) {

    int counter = 1;

    while(counter<length) {

        for (int i=0; i<length-counter; i++) {

            if(a[i]>=a[i+1]) {

                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        counter++;
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

    bubbleSort(a, size);

    cout << "The sorted array is: ";

    for (int i=0; i<size; i++) {
        
        cout << a[i] << " ";
    }

    return 0;
}