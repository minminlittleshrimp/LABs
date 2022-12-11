#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;

int main () { 
    double a,b,c,p,S,P;
    cin >> a >> b >> c ;

    P = a+b+c;
    p = P/2;

    S=sqrt((p)*(p-a)*(p-b)*(p-c));
    cout <<fixed<<setprecision(2);
    cout << P << endl;
    cout << S << endl;

    return 0;




}