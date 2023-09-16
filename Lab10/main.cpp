#include"stacktype.cpp"
#include<iostream>

using namespace std;

int main() {

    //create a stack of integers

    StackType<int> s1;

    //check if the stack is empty

    if (s1.IsEmpty()) {

        cout << "The stack is empty.";
    }
    else {

        cout << "The stack is not empty";
    }

    cout << endl;

    //push four items

    int input;

    for (int i=0; i<4; i++) {

        cin >> input;
        s1.Push(input);
    }

    cout << endl;

    //check if the stack is empty

    if (s1.IsEmpty()) {

        cout << "The stack is empty.";
    }
    else {

        cout << "The stack is not empty";
    }

    cout << endl;

    //check if the stack is full

    if (s1.IsFull()) {

        cout << "The stack is full.";
    }
    else {

        cout << "The stack is not full";
    }

    cout << endl;

    //print (as input order)

    StackType<int> temp1;

    while (s1.IsEmpty()!=true) {

        temp1.Push(s1.Top());
        s1.Pop();
    }

    cout << endl;

    while (temp1.IsEmpty()!=true) {

        cout << temp1.Top() << " ";
        s1.Push(temp1.Top());
        temp1.Pop();
    }

    cout << endl;

    //push another item

    cin >> input;
    s1.Push(input);

    cout << endl;

    //print again

    StackType<int> temp2;

    while (s1.IsEmpty()!=true) {

        temp2.Push(s1.Top());
        s1.Pop();
    }

    while (temp2.IsEmpty()!=true) {

        cout << temp2.Top() << " ";
        s1.Push(temp2.Top());
        temp2.Pop();
    }

    cout << endl;

    //check if the stack is full

    if (s1.IsFull()) {

        cout << "The stack is full.";
    }
    else {

        cout << "The stack is not full";
    }

    cout << endl;

    //pop two items

    for (int i=0; i<2; i++) {

        s1.Pop();
    }
 
    //print the top item

    cout << s1.Top();

    cout << endl;



    return 0;
}