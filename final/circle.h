#ifndef CIR_H
#define CIR_H

#include "shape.h"
#define PI 3.141592

template <class T>
class Circle: public Shape<T> {
    public:
        T cr, cx, cy, area;
    public:
        Circle(T);
        void setCoord(T x, T y);
        void print();
        T getArea();
};

template <class T>
Circle<T>::Circle(T r){
    cr = r;
}

template <class T>
void Circle<T>::print(){
    cout << "CIRCLE:" << endl;
    cout << "Center: "
         << "(x,y) = ("
         << cx << "," << cy << ")"
         << ", radius = " << cr << endl;
    cout << "Area = " << getArea();
}

template <class T>
T Circle<T>::getArea(){
    area = PI * cr * cr;
    return area;
}

template <class T>
void Circle<T>::setCoord(T x, T y){
    cx = x;
    cy = y;
}

#endif