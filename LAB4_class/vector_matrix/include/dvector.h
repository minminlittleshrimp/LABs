#ifndef DVECTOR_H
#define DVECTOR_H

#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
class vector_double
{
    /*----------------------Data member------------------------*/
    private:
        double *entries;
        int size;
    public:
    /*----------------------Constructor------------------------*/
        vector_double(int size);
        vector_double(int size, double val);
        vector_double(vector_double &v);
        
    /*---------------------Member methods----------------------*/
        int get_size();
        void set_entry(int idx, double val);
        double get_entry(int idx);
        void zeros();
        void ones();
        void random(double const &lower, double const &upper);
        double norm(int p);
        void print();
        void info();

    /*----------------------Entry access-----------------------*/
        double& operator ()(int idx);
        double& operator [](int idx);

    /*---------------------Member operators--------------------*/
        vector_double& operator =(vector_double &vect);
        vector_double& operator +=(vector_double &vect);
        vector_double& operator -=(vector_double &vect);
        vector_double& operator *=(vector_double &vect);
        vector_double& operator *=(const double alp);
        vector_double& operator + (vector_double &vect);
        vector_double& operator - (vector_double &vect);
        vector_double& operator * (vector_double &vect);
        vector_double& operator * (const double alp);
        vector_double& operator ^ (int val);

    /*--------------------Non-member methods-------------------*/
    friend std::ostream &operator << (std::ostream &os, vector_double &vect);
    // To do: nonscalar multiplication
};

#endif
