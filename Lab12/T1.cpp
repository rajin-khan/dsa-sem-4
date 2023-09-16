#include<iostream>

using namespace std;

int fib(int n) {

    if (n==1) {

        return 1;
    }
    else if (n==0) {

        return 0;
    }
    else {

        return fib(n-1) + fib(n-2);
    }
}

int main() {

    int n;

    cout << "\nThis program will give you the n-th fibonacci number.\nEnter n: ";
    cin >> n;

    cout << "The "<< n << "th fibonacci number is: " << fib(n) << endl << endl;

    return 0;
}