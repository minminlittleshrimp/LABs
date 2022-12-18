#include <iostream>
#include "dvector.h"
using namespace std;

/*----------------------Data member------------------------*/
vector_double::vector_double(int size) {
    this->size = size;
    this->entries = new double [size];
}

vector_double::vector_double(int size, double val) {
    this->size = size;
    this->entries = new double [size];
    for (int i = 0; i < size; i++) {
        entries[i] = val;
    }
}

vector_double::vector_double(vector_double &v) {
    this->size = size;
    this->entries = new double [size];
    for (int i = 0; i < this->size; i++) {
        this->entries[i] = v[i];
    }
}

/*---------------------Member methods----------------------*/
int vector_double::get_size() {
    return this->size;
}

void vector_double::set_entry(int idx, double val) {
    this->entries[idx] = val;
}

double vector_double::get_entry(int idx) {
    return this->entries[idx];
}

void vector_double::zeros() {
    for (int i = 0; i < this->size; i++) {
        this->entries[i] = 0;
    }
}

void vector_double::ones() {
    for (int i = 0; i < this->size; i++) {
        this->entries[i] = 1;
    }
}

void vector_double::random(double const &lower, double const &upper) {
    for (int i = 0; i < this->size; i++) {
        this->entries[i] = rand() % (int)upper + int(lower) + 1;
    }
    this->print();
}
double vector_double::norm(int p);
void vector_double::print();
void vector_double::info();

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