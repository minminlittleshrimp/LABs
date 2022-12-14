#include <iostream>
#include <iomanip>
using namespace std;

int main () { 
    int a,c ;
    double b;
    cin >> a >> b >> c;
    cout <<fixed<< setprecision(2)<< a*b+c << endl;
    return 0;
}