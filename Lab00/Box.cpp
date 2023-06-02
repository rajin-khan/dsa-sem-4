#include<iostream>

using namespace std;

//from here, keep in the Box.h file
class Box{

    private:

        double height;
        double width;
        double depth;

    public: 

        Box();
        Box(double w, double h, double d);

        void setWidth(double w);
        void setHeight(double h);
        void setDepth(double d);

        double getWidth();
        double getHeight();
        double getDepth();

        double  getVolume();
        void print();

};
//keep stuff in the Box.h file until here

//this part goes in the defintion Box.cpp file
Box::Box(){

    width = 1;
    height = 1;
    depth = 1;
        
}

Box::Box(double w, double h, double d){

    width = w;
    height = h;
    depth = d;
}

void Box::setWidth(double w){

    width = w;
}

void Box::setHeight(double h){

    height = h;
}
    
void Box::setDepth(double d){

    depth = d;
}

double Box::getWidth(){

    return width;
}
    
double Box::getHeight(){

    return height;
}
    
double Box::getDepth(){

    return depth;
}

double Box::getVolume(){

    return width * height * depth;
}
    
void Box::print(){

    cout << "Width = " << width << ", Height = " << height << ", Depth = " << depth << ", Volume = " << getVolume() << endl << endl;
}
//defintion in Box.cpp file ends here

//main driver main.cpp file starts here
int main() {

    Box b1(3, 4, 5);
    cout << "\nBox 1 info: ";
    b1.print();

    Box b2;
    cout << "Box 2 info: ";
    b2.print();

    cout << "- Box 2 update - ";

    double temp_w, temp_h, temp_d;

    cout << "\n\nEnter Width: ";
    cin >> temp_w;
    b2.setWidth(temp_w);

    cout << "Enter Height: ";
    cin >> temp_h;
    b2.setHeight(temp_h);

    cout << "Enter Depth: ";
    cin >> temp_d;
    b2.setDepth(temp_d);

    cout << "\nBox 2 new info: ";
    b2.print();

    return 0;
}
//main driver main.cpp ends here 