#include "stacktype.cpp"
#include <iostream>

using namespace std;

int main() {
    
    StackType<char> s1;

    const int MAX_LENGTH = 100;

    char input[MAX_LENGTH];

    cout << "This program will solve the balanced parenthesis problem." << endl;
    cout << "Please enter opening and closing parentheses consecutively." << endl << endl;

    cout << "Input: ";

    cin.getline(input, MAX_LENGTH);

    for (int i = 0; input[i] != '\0'; i++) {

        if (input[i] == '(') {

            s1.Push('(');
        } 
        else if (input[i] == ')') {

            if (s1.IsEmpty()) {

                cout << "The parentheses are not balanced." << endl;
                return 0;
            } 
            else {

                s1.Pop();
            }
        }
    }

    if (s1.IsEmpty()) {

        cout << "The parentheses are balanced." << endl;
    } 
    else {

        cout << "The parentheses are not balanced." << endl;
    }

    return 0;
}
