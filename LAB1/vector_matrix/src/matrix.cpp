#include "matrix.h"

double **allocate(int row, int col) {
    double **matrix = new double* [row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new double [col];
    }
    return matrix;
}

void random(double **matrix, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
        matrix[i][j] = i*j;
    }
}

void zeros(double **matrix, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
        matrix[i][j] = 0;
    }
}

void print(double **matrix, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
}

void deallocate(double **matrix, int row) {
    for (int i = 0; i < row; i++) {
        delete matrix[i];
        matrix[i] = nullptr;
    }
    delete [] matrix;
    matrix = nullptr;
}