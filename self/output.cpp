#include<iostream>

using namespace std; //std is the standard output stream, and we put a cout object in that output stream (standard output being the console)

int main() {

    int x = 10;
    int y = 5;

    cout << "x = " << x << endl // "<<" is the stream insertion operator. (so, we're inserting things into the stream. think of it like the "+" in java)
         << "y = " << y << endl ; //here, the "<<" stream insertion operator is "chained", meaning we add different things like this to the output stream
   
   //think about the direction of the arrows, it's pointing towards cout (think of it as the console) and hence data is going out
}