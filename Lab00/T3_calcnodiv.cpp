#include<iostream>

using namespace std;

int main() {

    int num1, num2;
    char operand;
    float result;

    cout << "\nEnter two integers: ";
    cin >> num1 >> num2;

    cout <<"\nEnter an operation ('+', '-', or '*'): ";
    cin >> operand;

    switch (operand) {

        case '+' : 
            result = num1+num2;
            cout << num1 << " + " << num2 << " = " << result << endl << endl;
            break;
        
        case '-' :
            result = num1-num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            result = num2-num1;
            cout << num2 << " - " << num1 << " = " << result << endl << endl;
            break;

        case '*' :
            result = num1*num2;
            cout << num1 << " * " << num2 << " = " << result << endl << endl;
            break;

        default:
            cout << "Invalid operation. Run the program again and enter a valid one.";
    }
    
    return 0;
}