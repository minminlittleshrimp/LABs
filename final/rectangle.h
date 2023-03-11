#ifndef REC_H
#define REC_H

#include "shape.h"

template <class T>
class Rectangle: public Shape<T> {
    public:
        T rw, rh, rx, ry, area;
    public:
        Rectangle(T, T);
        void setCoord(T x, T y);
        void print();
        T getArea();
};

template <class T>
Rectangle<T>::Rectangle(T w, T h){
    rw = w;
    rh = h;
}

template <class T>
void Rectangle<T>::print(){
    cout << "RECTANGLE:" << endl;
    cout << "Bottom-left: "
         << "(x,y) = ("
         << rx << "," << ry << ")"
         << ", height = " << rh
         << ", width = " << rw << endl;
    cout << "Area = " << getArea();
}

template <class T>
T Rectangle<T>::getArea(){
    area = rh * rw;
    return area;
}

template <class T>
void Rectangle<T>::setCoord(T x, T y){
    rx = x;
    ry = y;
}

template class Rectangle<double>;

#endif