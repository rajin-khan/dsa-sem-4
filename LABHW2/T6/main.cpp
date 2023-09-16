#include"stacktype.cpp"
#include<iostream>

using namespace std;

int operatorPrecedence(char op) {

    if (op =='*' || op =='/' ) {

        return 2;
    }
    else if (op =='+' || op =='-' ) {

        return 1;
    }
    else {

        return -1;
    }
}

string infixToPostfix(string infix) {

    StackType<char> s1;

    string postfix;

    for (int i=0; i<infix.length(); i++) {

        if (infix[i]>='0' && infix[i]<='9') {

            postfix += infix[i];
        }
        else if (infix[i]=='(') {

            s1.Push(infix[i]);
        }
        else if (infix[i]==')') {

            while(!s1.IsEmpty() && s1.Top()!='(') {

                postfix += s1.Top();
                s1.Pop();
            }
            if (!s1.IsEmpty()) {

                s1.Pop();
            }
        }
        else {

            while (!s1.IsEmpty() && operatorPrecedence(s1.Top()) >= operatorPrecedence(infix[i])) {

                postfix += s1.Top();
                s1.Pop();
            }

            s1.Push(infix[i]);

        }
    }

    while (!s1.IsEmpty()) {

        postfix += s1.Top();
        s1.Pop();
    }

    return postfix;
}

int postfixEval(string postfix) {

    StackType<int> s2;

    for (int i=0; i<postfix.length(); i++) {

        if (postfix[i]>='0' && postfix[i]<='9') {

            s2.Push(postfix[i]-'0'); //subtracting the ASCII of '0' from any character (number) gives the actual number
        }
        else {

            int operand2 = s2.Top(); //the first number to be popped form the stack is the second operand
            s2.Pop();
            int operand1 = s2.Top(); //the second number popped form the stack is the first operand
            s2.Pop();

            switch (postfix[i]) {

                case '+':

                    s2.Push(operand1+operand2);
                    break;
                
                case '-':

                    s2.Push(operand1-operand2);
                    break;

                case '*':

                    s2.Push(operand1*operand2);
                    break;

                case '/':

                    s2.Push(operand1/operand2);
                    break;
            }
        }
    }

    return s2.Top();
}

int main() {

    string input;
    string result;

    int operators = 0;
    int numbers = 0;
    int leftpars = 0;
    int rightpars = 0;

    //(2*3)+(4*9)
    cout << "\nEnter an expression (with only positive, single digit numbers, and if division is used, make sure numbers are divisible by each other): ";
    cin >> input;

    for (int i=0; i<=input.length(); i++) {

        if (input[i]=='*'||input[i]=='/'||input[i]=='+'||input[i]=='-') {

            operators++;
        }
        else if (input[i]=='(') {

            leftpars++;
        }
        else if (input[i]==')') {

            rightpars++;
        }
        else if (input[i]>='0'||input[i]<='9') {

            numbers++;
        }
    }

    if (operators<numbers && leftpars==rightpars) {

        result = infixToPostfix(input);
        cout << "Answer: " << postfixEval(result) << endl << endl;
    }
    else {

        cout << endl << "Invalid Expression." << endl;
    }


    return 0;
}