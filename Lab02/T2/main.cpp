#include"DynArr.cpp"
#include <iostream>

using namespace std;

int main()
{
    DynArr arr1;
    DynArr arr2(5);

    cout << endl;

    cout << "Enter 5 elements: ";
    int temp_var;

    for (int i=0; i<5; i++) {

        cin >> temp_var;

        arr2.setValue(i, temp_var);
    }

    cout << "Your list is: ";

    for (int i=0; i<5; i++) {
        
        cout << arr2.getValue(i) << " ";  
    }

    cout << endl << endl;

    //update

    cout << "Enter the size of list 1: ";

    int newSize;
    cin >> newSize;

    arr1.allocate(newSize);

    cout << "Enter the elements: ";

    for (int i=0; i<newSize; i++) {

        cin >> temp_var;

        arr1.setValue(i, temp_var);
    }

    cout << endl;

    cout << "Enter the new size of list 2: ";

    int newSize2;
    cin >> newSize2;

    arr2.allocate(newSize2);

    cout << "Enter the new elements: ";

    for (int i=0; i<newSize2; i++) {

        cin >> temp_var;

        arr2.setValue(i, temp_var);
    }

    cout << endl;

    cout << "The elements in list 1 are: ";

    for (int i=0; i<newSize; i++) {
        
        cout << arr1.getValue(i) << " "; 
    }

    cout << endl;

    cout << "The elements in list 2 are: ";

    for (int i=0; i<newSize2; i++) {
        
        cout << arr2.getValue(i) << " "; 
    }

    cout << endl << endl;

    arr1.~DynArr();
    arr2.~DynArr();

    return 0;
}