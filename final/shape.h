#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

template <class T>
class Shape {
    public:
        virtual void print()=0;
        virtual T getArea()=0;
};

#endif