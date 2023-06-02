#include"queue.cpp"
#include<iostream>

using namespace std;

int main() {

    // Create a queue of integers of size 5

    QueueType<int> q1(5);

    // Print if the queue is empty or not

    if (q1.IsEmpty()==true) {

        cout << "Queue is empty";
    }
    else {

        cout << "Queue is not empty";
    }

    cout << endl;
 
    // Enqueue four items

    int input;

    for (int i=0; i<4; i++) {

        cin >> input;

        try {

            q1.Enqueue(input);
        }
        catch (FullQueue exception){

            cout << "Queue overflow.";
        }
    }

    cout << endl;

    // Print if the queue is empty or not

    if (q1.IsEmpty()==true) {

        cout << "Queue is empty";
    }
    else {

        cout << "Queue is not empty";
    }

    cout << endl;

    // Print if the queue is full or not

    if (q1.IsFull()==true) {

        cout << "Queue is full";
    }
    else {

        cout << "Queue is not full";
    }

    cout << endl;

    // Enqueue another item

    try {

        q1.Enqueue(6);
    }
    catch (FullQueue exception){

        cout << "Queue overflow.";
    }

    cout << endl;

    // Print the values in the queue (in the order the values are given as input)

    QueueType<int> q2(5); //temporary queue instead of array
    int output; 

    while (!q1.IsEmpty()==true) { //while the first queue is not empty, we keep dequeueing its items and enqueueing them onto the temp array

        q1.Dequeue(output); //an item is dequeued
        cout << output << " ";

        q2.Enqueue(output); //the same item is enqueued
    }

    while (!q2.IsEmpty()==true) { //then, until q2 is emptied

        q2.Dequeue(output); //we,dequeue items from the temp queue
        q1.Enqueue(output); //and load them onto the initial queue, keeping it the same
    }

    cout << endl;

    // Print if the queue is full or not

    if (q1.IsFull()==true) {

        cout << "Queue is full";
    }
    else {

        cout << "Queue is not full";
    }

    cout << endl;

    // Enqueue another item

    cin >> input;

    try {

        q1.Enqueue(input);
    }
    catch (FullQueue exception){

        cout << "Queue overflow.";
    }

    cout << endl;

    // Dequeue two items

    for (int i=0; i<2; i++) {

        try {

            q1.Dequeue(output);
        }
        catch (EmptyQueue exception){

            cout << "Queue Underflow";
        }
    }

    cout << endl;

    // Print the values in the queue (in the order the values are given as input)

    while (!q1.IsEmpty()) {

        q1.Dequeue(output);
        cout << output << " ";

        q2.Enqueue(output);
    }

    while (!q2.IsEmpty()) {

        q2.Dequeue(output);
        q1.Enqueue(output);
    }

    cout << endl;

    // Dequeue three items

    for (int i=0; i<3; i++) {

        try {

            q1.Dequeue(output);
        }
        catch (EmptyQueue exception){

            cout << "Queue Underflow";
        }
    }

    cout << endl;

    // Print if the queue is empty or not

    if (q1.IsEmpty()==true) {

        cout << "Queue is empty";
    }
    else {

        cout << "Queue is not empty";
    }

    cout << endl;

    // Dequeue an item

    try {

        q1.Dequeue(output);
    }
    catch (EmptyQueue exception){

        cout << "Queue Underflow";
    }

    cout << endl;

    return 0;
}