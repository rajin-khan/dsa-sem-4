#include"stacktype.cpp"
#include<iostream>

using namespace std;

int main() {

    //create a stack of integers

    StackType<int> s1;

    cout << endl;

    //check if the stack is empty

    if (s1.IsEmpty()==true) {

        cout << "Stack is empty." << endl;
    }
    else {

        cout << "Stack is not empty." << endl;
    }

    //push four items

    int input;

    cout << "Enter four items into the stack: ";

    for (int i=0; i<4; i++) {

        cin >> input;
        s1.Push(input);
    }

    //check if the stack is empty

    if (s1.IsEmpty()==true) {

        cout << "Stack is empty." << endl;
    }
    else {

        cout << "Stack is not empty." << endl;
    }

    //check if the stack is full

    if (s1.IsFull()==true) {

        cout << "Stack is full." << endl;
    }
    else {

        cout << "Stack is not full." << endl;
    }

    //print (as input order)

    cout << "Your current stack is: ";

    int output[5]; //we first create an int array of the max size

    for (int i=3; i>=0; i--) { //we iterate backwards from 3 to 0, running four times

        output[i] = s1.Top(); //in each case, we store the top item from the stack in the i-th index, meaning the top item is stored at index 3, then the next top item is stored in 2, and so on
        s1.Pop(); //the top value is decremented, so we move down
    }

    for (int i=0; i<4; i++) {

        cout << output[i] << " "; //then, we print the output array
        s1.Push(output[i]); //and while printing, we push the items into the stack again in the correct order so it is like before
    }

    cout << endl;

    //push another item

    cout << "Push another item into the stack: ";

    cin >> input;
    s1.Push(input);

    //print again

    cout << "Your current stack is: ";

    for (int i=4; i>=0; i--) {

        output[i] = s1.Top();
        s1.Pop();
    }

    for (int i=0; i<5; i++) {

        cout << output[i] << " ";
        s1.Push(output[i]);
    }

    cout << endl;

    //check if the stack is full

    if (s1.IsFull()==true) {

        cout << "Stack is full." << endl;
    }
    else {

        cout << "Stack is not full." << endl;
    }

    //pop two items

    for (int i=0; i<2; i++) {

        s1.Pop();
        cout << "Item Popped!" << endl;
    }

    //print the top item

    cout << "Now, the top item is: " << s1.Top() << endl;

    return 0;
}