#include"DynArr.cpp"
#include <iostream>

using namespace std;

int main()
{
    DynArr arr1;
    DynArr arr2(5);

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

    cout << endl;

    cout << "Enter the number of extra elements you want to input: ";

    int extra;
    cin >> extra;

    arr2.allocate(extra);

    cout << "Enter the extra elements: ";

    for (int i=5; i<5+extra; i++) {

        cin >> temp_var;

        arr2.setValue(i, temp_var);
    }

    cout << "Your updated list is: ";

    for (int i=0; i<5+extra; i++) {
        
        cout << arr2.getValue(i) << " ";
        
    }
    
    arr2.~DynArr();

    return 0;
}
