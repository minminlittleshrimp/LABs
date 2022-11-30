double *allocate(int row, int col) {
    double **matrix = new double** [row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new double [col];
    }
    return matrix;
}