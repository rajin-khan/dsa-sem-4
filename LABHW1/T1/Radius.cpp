#include<iostream>

using namespace std;

int main() {

    double rad;
    const double PI = 3.14;

    cout << "\nThis program will print the area and perimeter of a circle for your given radius." << endl << endl;

    cout << "Enter the radius: ";
    cin >> rad;

    double perimeter = 2*rad*PI;
    double area = rad*rad*PI;

    cout << endl;

    cout << "The perimeter of the circle is: " << perimeter << ", \nand the area is: " << area << endl << endl;;

    return 0;
}