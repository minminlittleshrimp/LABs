#ifndef VECTOR_H
#define VECTOR_H

double *allocate(int v);
void random(double *vect, int size);
void zeros(double *vect, int size);
void print(double *vect, int size);
void deallocate(double *vect);

#endif
