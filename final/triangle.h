#ifndef TRI_H
#define TRI_H

#include "shape.h"

template <class T>
class Triangle: public Shape<T> {
    public:
        T th, tb, tx, ty, area;
    public:
        Triangle(T, T);
        void setCoord(T x, T y);
        void print();
        T getArea();
};

template <class T>
Triangle<T>::Triangle(T h, T b){
    th = h;
    tb = b;
}

template <class T>
void Triangle<T>::print(){
    cout << "TRIANGLE:" << endl;
    cout << "Bottom-left: "
         << "(x,y) = ("
         << tx << "," << ty << ")"
         << ", base = " << tb
         << ", height = " << th << endl;
    cout << "Area = " << getArea();
}

template <class T>
T Triangle<T>::getArea(){
    area = 0.5 * th * tb;
    return area;
}

template <class T>
void Triangle<T>::setCoord(T x, T y){
    tx = x;
    ty = y;
}

template class Triangle<double>;

#endif