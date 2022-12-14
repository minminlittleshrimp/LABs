#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;

double *allocate(int v);
void random(double *vect, int size);
void zeros(double *vect, int size);
void print(double *vect, int size);
void deallocate(double *vect);

#endif
