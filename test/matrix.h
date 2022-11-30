#ifndef MATRIX_H
#define MATRIX_H

double **allocate(int r, int c);
void random(double **matrix, int row, int col);
void zeros(double **matrix, int row, int col);
void print(double **matrix, int row, int col);
void deallocate(double **matrix, int row);

#endif