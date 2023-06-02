#include"DynArr.cpp"
#include <iostream>

using namespace std;

int main()
{
    DynArr arr1;
    DynArr arr2(5);

    cout << "Enter 5 elements: ";
    int temp;

    for (int i=0; i<5; i++) {

        cin >> temp;

        arr2.setValue(i, temp);
    }

    cout << "Your list is: ";

    for (int i=0; i<5; i++) {
        
        cout << arr2.getValue(i) << " ";
        
    }

    cout << endl;

    return 0;
}