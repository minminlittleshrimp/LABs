#include <iostream> 
using namespace std;

int main () { 
    int n, sum=0;
    cin >> n ;
    for ( int i=0; i < 5; i++ ) { 
        sum += n%10;
        n = n/10;
    }

    if (sum < 10) { 
        cout << sum <<endl;
    }
    else { 
        cout << sum%10 <<endl;
    }


    return 0;
}


