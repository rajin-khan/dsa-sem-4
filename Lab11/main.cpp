#include<iostream>
#include "quetype.cpp"

using namespace std;

int main() {

    QueType<int> q1;

    if (q1.IsEmpty()) {

        cout << "Queue is empty";
    }
    else {

        cout << "Queue is not empty";

    }

    cout << endl;

    int input;

    for (int i=0; i<4; i++) {

        cin >> input;
        q1.Enqueue(input);
    }

    cout << endl;

    if (q1.IsEmpty()) {

        cout << "Queue is empty";
    }
    else {

        cout << "Queue is not empty";

    }

    cout << endl;

    if (q1.IsFull()) {

        cout << "Queue is full";
    }
    else {

        cout << "Queue is not full";

    }

    cout << endl;

    cin >> input;

    q1.Enqueue(input);

    QueType<int> q2;

    int output;

    while (q1.IsEmpty()!=true) {

        q1.Dequeue(output);
        cout << output << " ";
        q2.Enqueue(output);
    }

    while (q2.IsEmpty()!=true) {

        q2.Dequeue(output);
        q1.Enqueue(output);
    }

    if (q1.IsFull()) {

        cout << "Queue is full";
    }
    else {

        cout << "Queue is not full";
    }

    cout << endl;

    cin >> input;

    q1.Enqueue(input);

    for (int i=0; i<2; i++) {

        q1.Dequeue(output);
    }

    cout << endl;

    while (q1.IsEmpty()!=true) {

        q1.Dequeue(output);
        cout << output << " ";
        q2.Enqueue(output);
    }

    while (q2.IsEmpty()!=true) {

        q2.Dequeue(output);
        q1.Enqueue(output);
    }

    cout << endl;

    for (int i=0; i<3; i++) {

        q1.Dequeue(output);
    }

    cout << endl;

    if (q1.IsEmpty()) {

        cout << "Queue is empty";
    }
    else {

        cout << "Queue is not empty";
    }

    cout << endl;

    q1.Dequeue(output);

    return 0;
}