#include"stack.cpp"
#include<iostream>

using namespace std;

int main() {

    stack<char> s1;

    cout << "\nThis program will solve the balanced parenthesis problem." << endl;
    cout << "Please enter opening and closing parentheses consecutively." << endl << endl;
    
    string input;
    cout << "Input: ";
    cin >> input; //we take a string input of parentheses

    bool emptyPop; //set up a voolean variable that is used as a reference in the pop function and changed accordingly

    for (int i=0; i<input.length(); i++) { //checks every single character in the string one by one, hence we iterate until we reach the max length of the string

        if (input[i]=='(') { //if an opening parenthesis is found,

            s1.push('('); //we push it into the stack
        }
        else if (input[i]==')') { //if a closing parenthesis is found,

            s1.pop(emptyPop); //we pop one element out of the stack (indicating the previous opening parenthesis that was already in the stack)
        }
    }

    if (s1.isEmpty()==true && emptyPop==false) { //now, if the stack is empty, AND we didn't perform a pop on an empty stack

        cout << "\nThe parentheses are balanced." << endl; //only then do we say that the parentheses are balanced
    }
    else {

        cout << "\nThe parentheses are not balanced." << endl; //otherwise, if the stack is either not empty, or we performed a pop on an empty stack, then the parnetheses are not balanced.
    }

    return 0;
}