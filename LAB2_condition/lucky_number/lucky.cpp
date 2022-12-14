#include <iostream> 
using namespace std;

int main () { 
    int a,b,x;
    cin >> a>>b>>x;
    if ((x%a==0) && (x%b==0)) {
        cout << "Both" << endl;
    }
    else if ((x%a==0) && (x%b!=0)) {
        cout << "Upan" << endl;
    }
    else if ((x%a!=0) && (x%b==0)) {
        cout << "Ipan" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
  
}