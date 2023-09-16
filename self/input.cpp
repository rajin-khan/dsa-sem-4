#include<iostream>

using namespace std;

int main() {

    cout << "\nEnter a value :";
    int value;

    cin >> value; //here, for taking input, ">>" is used, which is the stream extraction operator.
                 //it takes in input and stores it in whatever you're pointing at, so the direction of arrows are towards whatever you're storing it in.
    
    cout << value << endl << endl; //checking if input was taken correctly

    //now, in cpp, you can take multiple inputs in the same line as long as you separate it by a space (one space, multiple, doesn't matter)
    //so, something like:

    double x;
    double y;

    cout << "Enter the values of x and y: ";

    //cin >> x;
    //cin >> y; we could do it like this, or:
    
    cin >> x >> y;

    //would still work even if you input x and y here on the same line.

    cout << "x: " << x << endl
         << "y: " << y << endl << endl;

    /*
        so, like the way you chain the stream insertion operator for output "<<",
        you can chain the stream insertion operator too. so instead of doing:
            
            cin >> x;
            cin >> y;

        you could do:

            cin >> x >> y;

        which would mean you stored the first number you found in the input stream in x, then the second one (separated by one or more spaces) in y.
    */
    
}