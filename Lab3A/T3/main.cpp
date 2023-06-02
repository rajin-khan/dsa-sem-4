#include"DynArr.cpp"
#include <iostream>

using namespace std;

int main()
{

    int rows;
    int cols;

    cout << endl;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    DynArr<int> arr1(rows, cols);

    cout << endl;

    int temp;

    for (int i=0; i<rows; i++) {

        cout << "Enter the elements for row " << i << ": ";

        for (int j=0; j<cols; j++) {

            cin >> temp;
            arr1.setValue(i, j, temp);
        }
    }

    cout << endl;

    cout << "Your entered 2D array is: \n\n";

    for (int i=0; i<rows; i++) {

        for (int j=0; j<cols; j++) {

            cout << arr1.getValue(i, j) << " ";
        }

        cout << endl;
    }

    cout << endl;
    
    //arr1.~DynArr(); (causes segmentation fault for some reason)

    return 0;
}