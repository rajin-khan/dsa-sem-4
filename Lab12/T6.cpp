#include<iostream> 
#include<cmath>

using namespace std;

double seriesSum(int n) {

    if (n==0) {

        return 1;
    }
    else {

        return (1.0/pow(2,n) + seriesSum(n-1));
    }
}

int main() {

    double a;

    cout << "Enter an integer: ";
    cin >> a;

    double result = seriesSum(a);

    cout << "Result: " << result << endl;

    return 0;
}