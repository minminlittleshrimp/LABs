#include <iostream>
#include "constants.h"
#include "dvector.h"
#include "dmatrix.h"
using namespace std;

int main() {
    double alpha(TWO), beta(ZERO);

    /*
    * 1. create vectors and matries 
    */
    MatrixDouble A(5, 4), B(5, 4), C(5, 4), D(4, 5), E(5, 5);
    VectorDouble v(5), w(5), t(5);

    /*
    * 2. initialize vectors and matrices
    */ 
    v.rand(ONE, TEN);
    w.rand(ONE, TEN);
    t.zeros();

    A.rand(ONE, TEN);
    B.rand(ONE, TEN);
    C.zeros();
    D.rand(ONE, TEN);
    E.zeros();

    /*
    * 3. print out the initialized vectors and matrices
    */
    v.print();
    w.print();
    t.print();
    A.print(); A.info();
    B.print(); B.info();
    C.print(); C.info();
    D.print(); D.info();
    E.print(); E.info();

    /*
    * 4. compute vector norms
    */
    v.norm(2);
    v.norm(p_INF);

    /*
    * 5. operations
    */
    // ====== for vectors ========
    // === adding 2 vectors
    t = v + w;
    t.print();

    // === scalar - vector multiplication
    t = v*alpha;
    t.print();

    //=== increament
    ++t;
    t.print();

    // === dot product of 2 vectors of the same size
    beta = dot(v, w);
    cout << " beta = " << beta << endl;

    // ==== cross product of 2 vectors
    E = cross(v, w);
    E.print();
    
    // ====== for matrices ========
    // ==== adding 2 matrices
    E.zeros();
    C = A + B;
    C.print();
    E = C + B;  // should return error
    // ==== matrix - matrix multiplication
    E = A * D;
     E.print();
    // ==== matrix - scalar multiplication
    E = E * alpha ;
    E.print();
    // ==== increament
    ++E;
    // ==== matrix - vector multiplication
    t = E * v;
    t.print();

    return 0;
}






















    




