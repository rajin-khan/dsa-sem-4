#include"queue.cpp"
#include<iostream>

using namespace std;

int main() {

    int n;

    cout << "\nEnter an integer (n) to indicate the size of the queue: ";
    
    cin >> n;

    QueueType<string> q1(n+1);

    string output = "1";
    q1.Enqueue(output);

    cout << endl;

    for (int i=0; i<=n-1; i++) {

        q1.Dequeue(output);
        cout << output << endl;

        q1.Enqueue(output + "0");
        q1.Enqueue(output + "1");

    }

    cout << endl;

    return 0;
}