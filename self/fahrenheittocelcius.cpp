#include<iostream>

using namespace std;

int main() {

    cout << "\nEnter your temperature (in F): ";

    double fahrenheit;
    cin >> fahrenheit;

    double celcius = (fahrenheit-32)*(5.0/9);

    cout << "\nThe temperature in C is: " << celcius << "C" << endl << endl;
}