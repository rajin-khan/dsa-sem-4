#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

template <class T> 
class Rectangle {

    private:
        
        T length;
        T width;

    public:

        Rectangle();
        Rectangle(T l, T w);

        void setLength(T l);
        void setWidth(T w);

        T getLength();
        T getWidth();

        T getArea();
        T getPerimeter();

        void print();

};

#endif