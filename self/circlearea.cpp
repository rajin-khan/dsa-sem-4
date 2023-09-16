#include <iostream>
#include <cmath>

using namespace std;

int main() {

    const double pi = 3.14;

    cout << "\nEnter the value of the radius: ";

    double rad;
    cin >>rad;

    double area = pi * (pow(rad, 2));

    cout << "\nThe area of the circle is: " << area << endl << endl;

    return 0;
}