#include <iostream> 
using namespace std;

int main () { 
    int a,b,c;
    cin >> a >> b ;
    c = a-b;
    if (c < 0) {
        cout << b << endl;
    }
    else {
        cout << a << endl;
    }
    return 0;
}