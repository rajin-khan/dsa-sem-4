#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(nullptr));
    int roll = (rand() % (6 - 0) +1) + 0;

    cout << "\nThe dice reads: " << roll << endl << endl;

    return 0;
}