#include<iostream>

using namespace std;

int factorial(int n) {

    if (n==0) {

        return 1;
    }
    else {

        return n * factorial(n-1);
    }
}

int main() {

    int a;

    cout << "Enter an integer: ";
    cin >> a;

    int result = factorial(a);

    cout << "Factorial of " << a << " = " << result << endl;

    return 0;
}