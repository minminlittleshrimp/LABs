#include <iostream>
#include "vector.h"
using namespace std;

double *allocate(int size_v) {
    double *vector = new double [size_v];
    return vector;
}

void random(double *vect, int size) {
    for (int i = 0; i < size; i++) {
        vect[i] = i*i;
    }
}

void zeros(double *vect, int size) {
    for (int i = 0; i < size; i++) {
        vect[i] = 0;
    }
}

void print(double *vect, int size) {
    for (int i = 0; i < size; i++) {
        cout << vect[i] << " ";
    }
    cout << endl;
}

void deallocate(double *vect) {
    delete [] vect;
    vect = nullptr;
}