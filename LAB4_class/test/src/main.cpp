#include <iostream> 
#include "add.h"
#include "minus.h"

using namespace std;

int main () { 
    int a, b;
    cin >> a >> b;

    cout << func_add(a, b) << endl;
    cout << func_minus(a, b)<< endl; 

}