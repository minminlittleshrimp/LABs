#include <iostream>
using namespace std;

void level1_1 () {
    int a;
    cin >> a;
    cout << &a << endl;
}

void level1_2 () {
    int a;
    cin >> a;
    int *b = &a;
    //cout << "Address of a: " << &a <<endl;
    //cout << "Value pointer b hold: " << b << endl;
    //cout << "Value pointer b point to: " << *b << endl;
    cout << "Address of pointer b: " << &b << endl;
}

void level1_3 () {
    int a;
    cin >> a;
    int *b = &a;
    cout << "Value pointer b hold: " << b << endl;
}

void level1_4 () {
    int a;
    cin >> a;
    int *b = &a;
    cout << "Value pointer b point to: " << *b << endl;
}

int point_to (int *ptr) {
    return *ptr;
}

void level1_5 () {
    int a;
    cin >> a;
    int *b = &a;
    cout << "Value pointer b point to: " << point_to(b) << endl;
}

void level1_6 () {
    int a,b,c;
    int *mx, *mn;
    cin >> a >> b >> c;

    // Use max pointer to navigate to the grestest
    mx = &a;
    if (*mx < b) {
        mx = &b;
    }
    else {
        if (*mx < c) {
            mx = &c;
        }
    }
    
    // Use min pointer to navigate to the grestest
    mn = &a;
    mn = &a;
    if (*mn > b) {
        mn = &b;
    }
    else {
        if (*mn > c) {
            mn = &c;
        }
    }

    cout << "Max value: " << *mx << endl;
    cout << "Min value: " << *mn << endl;
}

void level2_1 () {
    int a;
    cin >> a;
    int fact = 1;
    int *pointer = &fact;
   
    for (int i=1; i<=a; i++) {
        fact = fact*i;
 
    }
    cout << *pointer << endl;

};
void level2_2 () {

};

int main () {
    //level1_1();
    //level1_2();
    //level1_3();
    //level1_4();
    //level1_5();
    //level1_6();
    level2_1();
    //level2_2();
    return 0;
}