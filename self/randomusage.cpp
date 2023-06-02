#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    //so that means we need to give random's seed (srand) a different value every time, so we include the ctime lib and use the time function
    //the time function (with null pointer or 0 as the argument) shows the seconds elapsed from june 1970. 
    //so we get a truly random value to give to srand every time.
    //we have to use a null pointer/0 for the argument of time.

    srand(time(nullptr)); //every time random's seed is given a different value, a different random number is generated. if the seed is the same, you get the same 'random' value every time.
    int num = rand(); //every time you use rand, only one value is generated, it's always the same, so you need srand. (random's seed)

    //for setting the range of random values, use:
    // [rand() % (maxValue - minValue /*one value less than the min value*/) +1] + minValue

    cout << num ;
    
    return 0;
}