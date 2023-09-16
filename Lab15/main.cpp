#include "graphtype.h"
#include"graphtype.cpp"

#include <iostream>

using namespace std;

int main() {

    GraphType<char> g1;

    char input;

    for (int i=0; i<8; i++) {

        cin >> input;
        g1.AddVertex(input);
    }

    g1.AddEdge('A', 'B', 1);
    g1.AddEdge('B', 'A', 1);
    g1.AddEdge('A', 'C', 1);
    g1.AddEdge('A', 'D', 1);
    g1.AddEdge('D', 'A', 1);
    g1.AddEdge('D', 'G', 1);
    g1.AddEdge('D', 'E', 1);
    g1.AddEdge('G', 'F', 1);
    g1.AddEdge('F', 'H', 1);
    g1.AddEdge('H', 'E', 1);

    //complete the rest

    return 0;
}
