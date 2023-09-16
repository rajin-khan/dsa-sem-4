#include<iostream>

using namespace std;

void hanoi(int discs, char source, char dest, char aux) {

    if (discs==1) {

        cout << "Move disc " << discs << " from peg " << source << " to peg " << dest << endl;
        return;
    }
    else {

        hanoi(discs-1, source, aux, dest);
        cout << "Move disc " << discs << " from peg " << source << " to peg " << dest << endl;
        hanoi(discs-1, aux, dest, source);
    }
}

int main() {

    int discs;

    cout << "Please enter the number of discs: ";

    cin >> discs;

    hanoi(discs, 'A', 'C', 'B');

    return 0;
}