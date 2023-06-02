#include<iostream>

using namespace std;

int main() {

    double sales = 95000;
    cout << "\nSales: $" << sales << endl;

    double stateTax = (4.0/100)*sales;
    double countyTax = (2.0/100)*sales;

    cout << "state tax = $" << stateTax << endl 
         << "county tax = $" << countyTax << endl
         << "total tax = $" << stateTax+countyTax << endl << endl;
         
}