#include"DynArr.cpp"
#include <iostream>

using namespace std;

int main()
{
    DynArr<int> arr1;
    DynArr<int> arr2(5);

    cout << "\nEnter 5 elements: ";
    int temp;

    for (int i=0; i<5; i++) {

        cin >> temp;

        arr2.setValue(i, temp);
    }

    cout << "Your list is: ";

    for (int i=0; i<5; i++) {
        
        cout << arr2.getValue(i) << " ";
        
    }

    cout << endl << endl;

    return 0;
}